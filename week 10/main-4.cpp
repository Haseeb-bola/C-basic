#include <iostream>// Returning object from function

using namespace std;

class Distance {
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

    Distance add_distance(Distance); //prototype

};

   Distance Distance::add_distance(Distance dist2) {

       Distance temp;
       temp.inches = inches + dist2.inches;
       if(temp.inches >= 12) {

        temp.inches -= 12;
        temp.feet++;

       }
       temp.feet += feet + dist2.feet;

       return temp;



   }

int main()
{
    Distance d1, d3;
    Distance d2(8, 8.9);
    d1.getDistance();
    d3 = d1.add_distance(d2);
    cout<<"Distance d1 data: "<<endl;
    d1.showDistance();
    cout<<endl;
    cout<<"Distance d2 data: "<<endl;
    d2.showDistance();
    cout<<endl;
    cout<<"Distance d3 data: "<<endl;
    d3.showDistance();
    cout<<endl;
    return 0;
}
