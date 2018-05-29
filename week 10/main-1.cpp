#include <iostream>//constant function

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
    void showDistance() const {
     cout<<feet<<"\'-"<<inches<<'\"'<<endl;
    }

    Distance add_distance(const Distance dist2) const {

        Distance temp;
       // inches = 0;
     //   feet = 7;
//     dist2.inches = 0;
//     dist2.inches = 8;
        temp.inches = inches + dist2.inches;
        if(temp.inches >= 12) {

            temp.inches = temp.inches - 12;
            temp.feet++;

        }
        temp.feet +=  feet + dist2.feet;

        return temp;

    }

};



int main()
{
    Distance d1, d3;
    Distance d2(5, 7.8);
    d1.getDistance();
    d3 = d1.add_distance(d2);

    cout<<"d1 data is = ";
    d1.showDistance();

    cout<<"d2 data is = ";
    d2.showDistance();

    cout<<"d3 data is = ";
    d3.showDistance();

    return 0;
}





