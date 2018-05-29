#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter any value ";
    cin>>number;
    cout<<endl<<number<<" is greater than 10 "<<(number > 10)<<endl;
    cout<<number<<" is less than 10 "<<(number < 10)<<endl;
    cout<<number<<" is equal to 10 "<<(number == 10)<<endl;
    cout<<number<<" is not equal to 10 "<<(number != 10)<<endl;

    return 0;
}
