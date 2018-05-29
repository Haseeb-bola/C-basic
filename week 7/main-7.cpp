#include <iostream> // programe using pointer to show number in acsending order

using namespace std;

void order(int&, int&); //function declaration

int main()
{
    int n1 = 35, n2 = 11;
    int n3 = 78, n4 = 54;

    order(n1, n2);  //function calling
    order(n3, n4);  //function calling

    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<endl;
    cout<<"n3 = "<<n3<<endl;
    cout<<"n4 = "<<n4<<endl;

    return 0;
}

   void order(int& num1, int& num2) {

        if(num1 > num2) {

            int temporary = num1;
            num1 = num2;
            num2 = temporary;
        }

   }
