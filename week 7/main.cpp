#include <iostream> // programe using user define function to convert weight into pound and pound into weight

using namespace std;

float lbstokg(float);
float kgtolbs(float);

int main()
{
    float lbs, kg;
    cout<<"Enter weight in pounds"<<endl;
    cin>>lbs;

    kg = lbstokg(lbs);
    cout<<"Weights in kg = "<<kg<<endl;

    cout<<"Enter weight in kg"<<endl;
    cin>>kg;

    lbs = kgtolbs(kg);
    cout<<"Weights in lbs = "<<lbs<<endl;

    return 0;
}

    float lbstokg(float lbs) {

    return lbs * 0.453592;

    }

    float kgtolbs(float kg) {

         return kg/0.453592;
     }


