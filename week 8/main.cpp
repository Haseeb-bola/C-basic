#include <iostream> // programe to convert weight in pound to weight in kg

using namespace std;

inline float lbstokg(float); //function declaration


    float lbstokg(float lbs) { //function definition

    return lbs * 0.453592;


    }


int main()
{
    float lbs;
    cout<<"Enter weight in pounds ";
    cin>>lbs;
    cout<<endl;
    cout<<"Weight in kilogram = "<<lbstokg(lbs);

    return 0;
}



