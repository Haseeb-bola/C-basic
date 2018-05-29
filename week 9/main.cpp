#include <iostream>

using namespace std;

class Counter {

private:
    unsigned int counter_var;
public:
    void setCounter() {

         counter_var = 0;

    }

    void incrementCounter() {

        counter_var++;

    }

    void displayCounter() {

        cout<<"The value of counter is: "<<counter_var<<endl;

    }

    void resetCounter() {
        counter_var = 0;
    }

};

int main()
{
    Counter c1,c2;

    c1.setCounter();
    c2.setCounter();

    cout<<"Counter 1"<<endl;
    c1.displayCounter();
    cout<<endl;
    cout<<"Counter 2"<<endl;
    c2.displayCounter();

    c1.incrementCounter();
    c1.incrementCounter();
    c2.incrementCounter();
    c2.incrementCounter();
    c2.incrementCounter();

    cout<<"Counter 1"<<endl;
    c1.displayCounter();
    cout<<endl;
    cout<<"Counter 2"<<endl;
    c2.displayCounter();

    c1.resetCounter();

    cout<<"Counter 1"<<endl;
    c1.displayCounter();
    cout<<endl;
    cout<<"Counter 2"<<endl;
    c2.displayCounter();



    return 0;
}
