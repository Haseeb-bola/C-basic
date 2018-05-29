#include <iostream>// default copy constractor

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
    void showDistance(){
    cout<<feet<<"\'-"<<inches<<'\"';
    }
};

int main()
{
    Distance d3;
    Distance d2(7, 6.9);
    Distance d1(d2);
    d3 = d1;

    cout<<"D1 information ";
    d1.showDistance();
    cout<<endl;

    cout<<"D2 information ";
    d2.showDistance();
    cout<<endl;

    cout<<"D3 information ";
    d3.showDistance();
    cout<<endl;

    return 0;
}
