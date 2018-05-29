#include <iostream>

using namespace std;

int main()
{
    int n_one, n_two;
    string opr;
    cout<<"Please enter three numbers along with desired operation: "<<endl;
    cin>>n_one>>n_two>>opr;

    cout<<"You entered  "<<n_one<<" and "<<n_two<<" and operation is "<<opr<<endl;

    if(opr == "+") {
        cout<<"Addition is: "<<n_one + n_two<<endl;

    }
    else if(opr == "-")
    {
      cout<<"Subtraction is: "<<n_one - n_two<<endl;
    }
    else if(opr == "*")
    {
        cout<<"Multiplication is: "<<n_one * n_two<<endl;
    }
    else if(opr == "/")
    {
        cout<<"Division is: "<<n_one / n_two<<endl;
    }
    else if(opr == "%")
    {
        cout<<"Modulus is: "<<n_one % n_two<<endl;
    }
    else
    {
        cout<<"Wrong operation! try again"<<endl;

    }

    cout<<"Calculate request of division: 250/5/5 "<<250/(5/5);
    return 0;
}
