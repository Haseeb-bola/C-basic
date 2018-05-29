#include <iostream>

using namespace std;

struct part {
        int serialNumber;
        float cost;
        string name;
        int modelNumber;
        };


int main()
{
    int x = 10;
    part part1 = {123, 450.7,"battery", 453};
    part part2 = {124, 432.8, "bulb", 400};
    part part3;
    cout<<"Enter data for part3"<<endl;
    cout<<"Enter part3 serialNumber"<<endl;
    cin>>part3.serialNumber;
    cout<<"Enter part3 cost"<<endl;
    cin>>part3.cost;
    cout<<"Enter part3 name"<<endl;
    cin>>part3.name;
    cout<<"Enter part3 modelNumber"<<endl;
    cin>>part3.modelNumber;

    cout<<endl<<"Information about part1: "<<endl;
    cout<<"Serial number  "<<part1.serialNumber<<"  Cost "<<part1.cost<<"  name  "<<part1.name<<" model number "<<part1.modelNumber<<endl;
    cout<<endl<<"Information about part2: "<<endl;
    cout<<"Serial number "<<part2.serialNumber<<"  Cost "<<part2.cost<<"  name  "<<part2.name<<" model number "<<part2.modelNumber<<endl;
    cout<<endl<<"Information about part3: "<<endl;
    cout<<"Serial number "<<part3.serialNumber<<"  Cost "<<part3.cost<<"  name  "<<part3.name<<" model number "<<part3.modelNumber<<endl;
    return 0;
}
