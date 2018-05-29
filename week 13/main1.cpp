#include <iostream> //programe to copy one array data to another using cstring library built in function
#include <cstring>   // or
                      //copying string in easy way

using namespace std;

int main()
{
    char str1[] = "Programming needs lots of practice!";
    const int MAX = 80;
    char str2[MAX];
    strcpy(str2, str1);
    cout<<endl<<str2<<endl;
    return 0;
}
