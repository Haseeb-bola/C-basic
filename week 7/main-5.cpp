#include <iostream> // programe to sperate interger and fraction part using pointer 

using namespace std;

int main()
{
   void intfrac(float, float&, float&); //function prototype
   float number, intpart, fracpart;

   do {

        cout<<"Enter any real number"<<endl;
        cin>>number;
        intfrac(number, intpart, fracpart); //function calling
        cout<<" Integer part is "<<intpart<<
              " fraction part is "<<fracpart<<endl;

   } while(number != 0.0);



    return 0;
}

    void intfrac(float number, float& integerpart, float& fractionpart) {

    long temp = static_cast<long>(number);
    integerpart = static_cast<float>(temp);
    fractionpart = number - integerpart;

    }
