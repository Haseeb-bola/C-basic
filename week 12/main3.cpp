#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

void showSales(double[DISTRICTS][MONTHS]); //FUNCTION PROTOTYPE, FUNCTION DECLARATION

int main()
{
    double sales[DISTRICTS][MONTHS] = {
                                           {45.67, 43.56, 324.33},
                                           {234.24, 343.32, 324.22},
                                           {34.56, 78.65, 45.78},
                                           {65.78, 435.33, 454.67}
                                      };
    showSales(sales);
    return 0;
}

void showSales(double funSales[DISTRICTS][MONTHS]) {
  int d, m;

  cout<<"          Months\n";
  cout<<"            1         2             3 \n";
  for(d = 0; d < DISTRICTS; d++) {
    cout<<"\nSales in district "<<d+1<< " is = ";
    for(m=0; m < MONTHS; m++) {
       cout<<setiosflags(ios::fixed) //no exponents
           <<setiosflags(ios::showpoint)
           <<setprecision(3)
           <<setw(10)
           <<funSales[d][m];

    }

  }

}
