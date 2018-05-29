#include <iostream>  //simpe calculator using cin and cout operation and show number in acending order

using namespace std;

int main()
{
    int number_one, number_two;
    cout<<"Please enter values of variables: "<<endl;
    cout<<"Please enter value for number_one: "<<endl;
    cin>>number_one;
    cout<<"Please enter value for number_two"<<endl;
    cin>>number_two;
    cout<<"\nAddition operation result: "<<endl;
    cout<<number_one + number_two<<endl;
    cout<<"\nSubtraction operation result is: "<<endl;
    cout<<number_one - number_two<<endl;
    cout<<"\nDivision operation result is: "<<endl;
    if(number_two == 0)
    {
        cout<<"Cannot go into infinite operation, cannot divide by zero: "<<endl;

    }
    else
    {
        cout<<number_one/number_two<<endl;
    }

    cout<<"\nMultiplication operation result is: "<<endl;
    if(number_one < 0)
    {

        cout<<"Number one is less than zero, will not do multiplication: "<<endl;
    }
    else {
        cout<<number_one * number_two<<endl;

    }

    cout<<"Modulus of number_one and number_two is: "<<endl;
    cout<<number_one%number_two<<endl;
    cout<<"Square of both numbers: "<<endl;
    cout<<number_one * number_one<<" "<<number_two * number_two<<endl;
    cout<<"Average of two numbers: "<<endl;
    cout<<(number_one + number_two) / 2;

    if(number_one <= number_two)
    {
        cout<<"\n Numbers In ascending order: "<<number_one<<" "<<number_two<<endl;

    }
    else {
        cout<<"\n Numbers in ascending order: "<<number_two<<"  "<<number_one<<endl;
    }

    return 0;









}
