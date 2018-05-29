#include <iostream>

using namespace std;

const int SIZE = 4;

struct part {
   int modelNumber;
   int partNumber;
   float cost;
};



int main()
{
    part pt[SIZE];

    for(int i = 0; i < SIZE; i++) {

        cout<<"\nEnter Model Number for "<<i+1<<" item ";
        cin>>pt[i].modelNumber;
        cout<<"\nEnter Part Number for "<<i+1<<" item ";
        cin>>pt[i].partNumber;
        cout<<"\nEnter cost for "<<i+1<<" item ";
        cin>>pt[i].cost;
    }

    for(int j = 0; j < SIZE; j++) {
        cout<<endl;
        cout<<"\nModel Number for: "<<j+1<<" is = "<<pt[j].modelNumber;
        cout<<"\nPart Number for: "<<j+1<<" is = "<<pt[j].partNumber;
        cout<<"\nCost for: "<<j+1<<" is = "<<pt[j].cost;

    }
    return 0;
}
