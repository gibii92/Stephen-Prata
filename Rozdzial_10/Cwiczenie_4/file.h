#ifndef file_h_
#define file_h_
namespace SALES
{

    class Sales
    {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        void setSales();
        void showSales() const;
    };

}
#endif