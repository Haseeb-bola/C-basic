#include <iostream>

using namespace std;

class Distance {

   int feet;
   float inches;
   public:
       Distance() {

          feet = 0;
          inches = 0;

       }
       Distance(int ft, float in)
       {
           feet = ft;
           inches = in;

       }

       void getDistance() {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
       }
       void showDistance() {
        cout<<feet<<"\'-"<<inches<<'\"'<<endl;

       }

       void add_distance(Distance, Distance);//function signature, function declaration, prototype

};

    void Distance::add_distance(Distance dist1, Distance dist2) {


      inches = dist1.inches + dist2.inches;
      if(inches >= 12) {

        inches = inches - 12;
        feet++;
      }
        feet = feet + dist1.feet + dist2.feet;
    }

int main()
{
    Distance d1;
    d1.getDistance();
    Distance d2(7, 8.7);
    Distance d3;
    d3.add_distance(d1, d2);
    cout<<"d1 data"<<endl;
    d1.showDistance();
    cout<<"d2 data"<<endl;
    d2.showDistance();
    cout<<"d3 data"<<endl;
    d3.showDistance();


    return 0;
}
