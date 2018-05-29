#include <iostream>    programe using object class to set and show car properties
#include <cstring>
#include <iomanip>

using namespace std;

class Car {
private:
    char carName[30];
    int carNumber;
    long double cost;
public:
    void setCarProperties(char carN[], int carNum, long double c) {
    strcpy(carName, carN);
    carNumber = carNum;
    cost = c;
    }
    void getCarProperties() {
    cout<<"The name of car is "<<carName<<endl;
    cout<<"The number of car is "<<carNumber<<endl;
    cout<<"The cost of car is "<<setiosflags(ios::fixed)<<setprecision(2)<<cost<<endl;
    }
};

int main()
{
    Car car1, car2;
    car1.setCarProperties("Honda Civic", 11, 1500000);
    car2.setCarProperties("SE Limited", 8125, 100000);

    cout<<endl;
    cout<<"Car1 data is: "<<endl;
    car1.getCarProperties();
    cout<<endl;
    cout<<"Car2 data is: "<<endl;
    car2.getCarProperties();
    cout<<endl;

    return 0;
}
