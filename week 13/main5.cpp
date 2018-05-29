#include <iostream>  programe using two dimenstion array to store daay names in week if you not use cstring here it will not effect programe 
#include <cstring>

using namespace std;

int main()
{
    const int DAYS = 7;
    const int MAX = 10;
    char days_in_week[DAYS][MAX] = {"Sunday",
                                    "Monday",
                                    "Tuesday",
                                    "Wednesday",
                                    "Thursday",
                                    "Friday",
                                    "Saturday"};
    for(int i = 0; i < DAYS; i++) {

        cout<<endl<<days_in_week[i]<<endl;
    }
    return 0;
}
