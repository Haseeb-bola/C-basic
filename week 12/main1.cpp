#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    void setDistance() {
    cout<<"Enter feet: "<<endl;
    cin>>feet;
    cout<<"Enter inches: "<<endl;
    cin>>inches;
    }
    void showDistance() {
    cout<<feet<<"\'- "<<inches<<'\"'<<endl;
    }
};

int main()
{
    Distance dist[100];
    int n = 0;
  //  cout<<n++;
    char ans;

    do {
    cout<<"Enter distance for "<<n+1<<" object "<<endl;
    dist[n++].setDistance();
    //n++;
    cout<<"\n Do you want to continue (y/n)"<<endl;
    cin>>ans;
    }while(ans != 'n');

    for(int i = 0; i < n; i++) {

        cout<<"Data for object "<<i+1<<" = ";
        dist[i].showDistance();
        cout<<endl;
    }


    return 0;
}
