#include <iostream>

using namespace std;

int main()
{
    const int MAX = 80;
    char str[MAX];
    cout<<"\nEnter any string: ";
    cin.get(str, MAX); //YOU would be able to read embedded spaces
    cout<<"\nYou string is: "<<str<<endl;
    return 0;
}
