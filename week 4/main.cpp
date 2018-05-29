#include <iostream>

using namespace std;

int main()
{
    long double first, second, sum = 0;

    first = 0;
    cout<<first<<" ";
    second = 1;
    for(int i = 1; i<= 1000; i++)
        {
            cout<<second<<" ";
            sum = first + second;
            first = second;
            second = sum;
        }
    return 0;
}
