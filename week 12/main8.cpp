#include <iostream>
#include <iomanip>

const int DISTRICTS = 4;
const int MONTHS = 3;


using namespace std;

int main()
{
    double sales[DISTRICTS][MONTHS] = {
                                           {45.67, 43.56, 324.33},
                                           {234.24, 343.32, 324.22},
                                           {34.56, 78.65, 45.78},
                                           {65.78, 435.33, 454.67}
                                      };
    cout<<"\n\n";
    cout<<"                           Months\n    ";
    cout<<"                           1           2         3    ";
    for(int d = 0; d < DISTRICTS; d++) {
        cout<<"\nDistrict  "<<d+1<<"  Sales is = ";
        for(int m = 0; m < MONTHS; m++) {

            cout<<setw(10)
            <<setiosflags(ios::fixed) // do not show exponents
            <<setiosflags(ios::showpoint) //always show point
            <<setprecision(2)
            <<sales[d][m];

        }



    }
    return 0;
}
