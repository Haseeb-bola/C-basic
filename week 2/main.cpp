#include <iostream>

using namespace std;

int main()
{
   int n_one, n_two;
   char opr;
   char option = 'y';
   while(option == 'y') {
   cout<<"Enter two numbers along with operation:  "<<endl;
   cin>>n_one>>n_two>>opr;
   cout<<"You entered "<<n_one<<" and "<<n_two<<" and operation is "<<opr<<endl;

   switch(opr) {

   case '+': {cout<<"Addition is: "<<n_one + n_two;
              break;}
   case '-': {cout<<"Subtraction is: "<<n_one - n_two;
             break;}
   case '*': {cout<<"Multiplication is: "<<n_one * n_two;
             break;}
   case '/': {cout<<"Division is: "<<n_one / n_two;
             break;}
   case '%': {cout<<"Modulus is: "<<n_one % n_two;
             break;}
   default: {cout<<"Wrong operation: try again"<<endl;}

   }

   cout<<"\nDo you want to continue: Enter y for yes or enter any other number to exit: "<<endl;
   cin>>option;
   }

    return 0;
}
