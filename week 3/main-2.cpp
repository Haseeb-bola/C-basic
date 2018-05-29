#include <iostream>

using namespace std;

const int inches_per_foot = 12;
const float centimeter_per_inch = 2.54;

int main()
{

    float feet_entered, inches_entered;
    float total_inches, height_in_centimeters;
    cout<<"Enter you height! "<<endl;
    cout<<"Enter number of feets "<<endl;
    cin>>feet_entered;
    cout<<"Enter number of inches "<<endl;
    cin>>inches_entered;
    cout<<"Your height is "<<feet_entered<<" feets and "<<inches_entered<<" inches "<<endl;

    total_inches = (feet_entered * inches_per_foot) + inches_entered;
    height_in_centimeters = total_inches * centimeter_per_inch;
    cout<<"Your height in centimeters is: "<<height_in_centimeters<<endl;


    return 10;
}
