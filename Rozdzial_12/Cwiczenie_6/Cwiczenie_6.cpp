#include <iostream>
#include <cstdlib>
#include <ctime>
#include "file.cpp"
const int MIN_PER_HR = 60;
bool newcustomer(double x);
int main()
{
    using namespace std;
    using std::ios_base;
    std::srand(std::time(0));
    cout << "Studium przypadku: bankomat Banku Stu kas\n";
    cout << "Symulowany czas: 100 godzin\n";
    int hours = 100;

    double perhour;
    double min_per_cust;
    long cyclelimit = MIN_PER_HR * hours;
    Item temp;
    long turnaways_1;
    long customers_1;
    long served_1;
    long sumline_1;
    int wait_time_1;
    long line_wait_1;
    long turnaways_2;
    long customers_2;
    long served_2;
    long sumline_2;
    int wait_time_2;
    long line_wait_2;
    double average_wait;
    int i = 120;
    do
    {

        perhour = --i;
        min_per_cust = MIN_PER_HR / perhour;
        Queue line_1(perhour * hours / 2);
        Queue line_2(perhour * hours / 2);
        turnaways_1 = turnaways_2 = 0;
        customers_1 = customers_2 = 0;
        served_1 = served_2 = 0;
        sumline_1 = sumline_2 = 0;
        wait_time_1 = wait_time_2 = 0;
        line_wait_1 = line_wait_2 = 0;
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))
            {
                if (line_1.queuecount() <= line_2.queuecount())
                {
                    if (line_1.isfull())
                        turnaways_1++;
                    else
                    {
                        customers_1++;
                        temp.set(cycle);
                        line_1.enqueue(temp);
                    }
                }
                else
                {
                    if (line_2.isfull())
                        turnaways_2++;
                    else
                    {
                        customers_2++;
                        temp.set(cycle);
                        line_2.enqueue(temp);
                    }
                }
                if (wait_time_1 <= 0 && !line_1.isempty())
                {
                    line_1.dequeue(temp);
                    wait_time_1 = temp.ptime();
                    line_wait_1 += cycle - temp.when();
                    served_1++;
                }
                if (wait_time_2 <= 0 && !line_2.isempty())
                {
                    line_2.dequeue(temp);
                    wait_time_2 = temp.ptime();
                    line_wait_2 += cycle - temp.when();
                    served_2++;
                }
            }
            if (wait_time_1 > 0)
                wait_time_1--;
            if (wait_time_2 > 0)
                wait_time_2--;
            sumline_1 += line_1.queuecount();
            sumline_2 += line_2.queuecount();
        }
        line_1.~Queue();
        line_2.~Queue();
        average_wait = double(line_wait_1 + line_wait_2) / (served_1 + served_2);
    } while (average_wait > 1.0);
    i++;
    if (customers_1 + customers_2 > 0)
    {
        cout << "Liczba klientow na godzine: " << i << endl;
        cout << " liczba klientow przyjetych: " << customers_1 + customers_2 << endl;
        cout << "liczba klientow obsluzonych: " << served_1 + served_2 << endl;
        cout << " liczba klientow odeslanych: " << turnaways_1 + turnaways_2 << endl;
        cout << "    srednia dlugosc kolejki: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << (double)(sumline_1 * sumline_1 + sumline_2 * sumline_2) / (cyclelimit * (sumline_1 + sumline_2)) << endl;
        cout << "    sredni czas oczekiwania: " << average_wait << " minut\n";
    }
    else
        cout << "Brak klientow!\n";
    cout << "Gotowe!\n";
    return 0;
}
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}