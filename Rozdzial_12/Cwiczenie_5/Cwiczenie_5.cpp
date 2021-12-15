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
    
    cout << "Symulowany czas: 100 (w godzinach)\n";
    int hours = 100;
    long cyclelimit = MIN_PER_HR * hours;
    double perhour;
    double min_per_cust;
    
    Item temp;
    int qs = 59;
    for(int i = qs;i>0;i--)
    {
    perhour=i;
    min_per_cust = MIN_PER_HR / perhour;
    Queue line(hours*perhour);
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sumline = 0;
    int wait_time = 0;
    long line_wait = 0;
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))
        {
            if (line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sumline += line.queuecount();
    }
    line.~Queue();
    if ((double)line_wait / served <=1.0)
    {
        cout<<perhour<<" klientow na godzine.\n";
        break;
    }
    
    }
    cout << "Gotowe!\n";
    return 0;
}
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);

}