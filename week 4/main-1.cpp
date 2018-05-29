#include <iostream>

using namespace std;

int main()
{
    long double factorial = 1;
    double number;
    cout<<"Enter any number to find its factorial "<<endl;
    cin>>number;
    for(int i = 1; i<=number; i++){

        factorial = factorial * i;
    }

    cout<<"The factorial of "<<number<<" = "<<factorial<<endl;
    return 0;
}
