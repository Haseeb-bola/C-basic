#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int number;
    cout<<"Enter any number to know whether it is prime or not "<<endl;
    cin>>number;

    for(int i = 2; i <= (number/2); i++)
        {
             if(number%i == 0)
             {
                 cout<<"The number is not prime";
                 exit(0);
             }

        }

    cout<<"The number is prime";

    return 0;
}
