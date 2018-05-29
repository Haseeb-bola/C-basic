#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance() {

     feet = 0;
     inches = 0;

    }

    Distance(int ft, float in) {

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

   void add_distance(Distance, Distance); //function declaration, function prototype, function signature

};

   void Distance::add_distance(Distance dist1, Distance dist2) {

    inches = dist1.inches + dist2.inches;
    feet = 0;
    if(inches >= 12) {

         inches = inches -12;
         feet++;

       }

       feet = feet + dist1.feet + dist2.feet;

   }

int main()
{
    Distance d1(5, 6.7);
    Distance d2;
    d2.getDistance();
    Distance d3;
    d3.add_distance(d1, d2);
    cout<<"Door 1 height  ";
    d1.showDistance();
    cout<<"Door 2 height  ";
    d2.showDistance();
    cout<<"Door 3 height
    ";
    d3.showDistance();
    return 0;
}
