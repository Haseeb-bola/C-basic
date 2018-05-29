#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i<=190;i++){

        char ch = (i%8) ? ' ' : 'x';
        cout<<ch;
    }
    return 0;
}
