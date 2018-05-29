#include <iostream>

using namespace std;

const int MAX = 150;
char str[MAX];

int main()
{
    cout<<"Enter any string with new lines: "<<endl;
    cin.get(str, MAX, '$');
    cout<<"\nYou entered:\n "<<str;
    return 0;
}
