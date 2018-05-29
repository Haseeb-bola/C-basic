#include <iostream>  // copying string in hard way
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "Salman Khan";
    const int MAX = 50;
    char str2[MAX];
    cout<<strlen(str1); //we should get 11 here
    int i;
    for(i = 0; i < strlen(str1); i++) {
        str2[i] = str1[i];
    }
    cout<<endl<<i<<endl;
    str2[i] = '\0';
    cout<<endl;
    cout<<str2;
    cout<<endl;
    return 0;
}
