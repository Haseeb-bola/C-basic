#include <iostream>

using namespace std;

int main()
{

    for(int i = 1; i<=15;i++)
    {
        cout<<"Square of "<<i<<" = "<<i*i<<endl;
    }

    cout<<endl;

    for(int i = 15; i>=1; i--)
    {
        cout<<"Square of "<<i<<" = "<<i*i<<endl;
    }
    return 0;
}
