#include <iostream>

using namespace std;

struct Distance {
int feet;
float inches;
};

int main()
{
    struct Room {
    Distance length;
    Distance width;
    };

    Room room1;

    room1.length.feet = 30;
    room1.length.inches = 8.5;

    room1.width.feet = 25;
    room1.width.inches = 8.6;

    float L = room1.length.feet + room1.length.inches/12;
    float W = room1.width.feet + room1.width.inches/12;

    cout<<"Room 1 area is = "<<L * W<<" square feet "<<endl;

    cout<<"Enter length and width of your choice "<<endl;
    cout<<"Enter length in feet"<<endl;
    cin>>room1.length.feet;
    cout<<"Enter length in inches"<<endl;
    cin>>room1.length.inches;
    cout<<"Enter width in feet"<<endl;
    cin>>room1.width.feet;
    cout<<"Enter width in inches"<<endl;
    cin>>room1.width.inches;
     L = room1.length.feet + room1.length.inches/12;
     W = room1.width.feet + room1.width.inches/12;

     cout<<"Room 1 area is = "<<L * W<<" square feet "<<endl;

    return 0;
}
