#include <iostream>  \\ programe to count number of days to given date 

using namespace std;

int main()
{
    int day, month, total_days;
    int months_in_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    total_days = 0;

    cout<<"Enter day of month"<<endl;
    cin>>day;
    cout<<"Enter month of year"<<endl;
    cin>>month;

    total_days = day;
    for(int i = 0; i < month - 1; i++) {

        total_days = total_days + months_in_year[i];
    }

    cout<<"Total days are = "<<total_days;

    return 0;
}
