#include <iostream> // programe to show a number is even or odd

using namespace std;

int main()
{
    string result = "even"; int val = 0;
    cout<<"Enter Integer value: "<<endl;
    cin>>val;
    int modulus_result;
    modulus_result = val % 2;

    cout<<endl<<modulus_result<<"  ";

    if(val%2)
      {
          cout<<"The number is odd"<<endl;
      }
    else
    {
        result = "even";
        cout<<"The number is even:"<<endl;
    }
    return 0;
}
