#include <iostream> // programe to display number of sales of month in districts
#include <iomanip>

using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;

int main()
{
    float sales[DISTRICTS][MONTHS];
    int d,m;
    for(d = 0; d < DISTRICTS; d++) {

        for(m=0; m < MONTHS; m++) {
            cout<<"\nEnter sales for District "<<d+1;
            cout<<"\nMonth is "<<m+1<<"  ";
            cin>>sales[d][m];

        }
    }

    cout<<"\n\n";
    cout<<"                  Months \n";
    cout<<"                     1          2          3    ";
    cout<<endl;

    for(d=0; d < DISTRICTS; d++) {

        cout<<"\nDistrict = "<<d+1;

        for(m=0; m < MONTHS; m++) {

            cout<<setiosflags(ios::fixed) //i do not want result to be in exponents
            <<setiosflags(ios::showpoint) // always show points
            <<setprecision(2)
            <<setw(10)
            <<sales[d][m];
        }






    }


    return 0;
}
