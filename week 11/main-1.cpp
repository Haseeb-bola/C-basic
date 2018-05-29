#include <iostream>

using namespace std;

int main()


{

    int day, month, total_days;
    int months_in_year[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout<<"Please enter day of month"<<endl;
    cin>>day;
    cout<<"Please enter month of year"<<endl;
    cin>>month;
    total_days = 0;
    total_days = day;

    for(int i = 0; i < month - 1; i++) {

        total_days = total_days + months_in_year[i];
    }

    cout<<endl;
    cout<<"Total days are = "<<total_days;

    return 0;
}
