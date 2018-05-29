#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MAX = 10;
    char str[MAX];

    cout<<"Enter any string: "<<endl;
    //cin>>setw(MAX)>>str;
    cin.get(str, MAX);
    cout<<"\nYou entered: "<<str;
    cout<<str[9];

    return 0;
}
