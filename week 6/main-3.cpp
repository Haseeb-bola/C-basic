#include <iostream>

using namespace std;

int main()
{
    enum days_in_week {sunday, monday, thuesday, wednessday, thursday, friday, saturday};
    enum months_in_years {january, february, march, april, may, june, july, august, september, october, november, december};
    enum dice {one, two, three, four, five, six};
    enum coin {head, tail};

    days_in_week day1, day2, day3;

    day1 = sunday;
    day2 = friday;

    day3 = saturday;

    cout<<day1<<endl;
    cout<<day2<<endl;
    if(day2 > day1) {cout<<"Day2 come after day1";}
    cout<<endl<<day2 - day1;

    cout<<endl;
    if(day1 == 0) {cout<<"Day1 is Sunday";}

    return 0;
}
