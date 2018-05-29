#include <iostream>

using namespace std;

int main()
{
    int number;
    char x = 'y';
    while(x == 'y') {
    cout<<"Enter any number: "<<endl;
    cin>>number;
    cout<<"You entered "<<number<<endl;

    if(number > 0) {cout<<number<<" is positive: "<<endl;}
    else if(number < 0 ) {cout<<number<<" is negative: "<<endl;}
    else { cout<<number<<" is equal to 0"<<endl;}
    cout<<"Do you want to continue: "<<endl;
    cin>>x;
    }
    return 0;
}
