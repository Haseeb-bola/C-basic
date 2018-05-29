#include <iostream> // programme to display total and average weight of students 

using namespace std;

int main()
{
    float weight[10]; // = {18.89, 17, 21, 20, 61.33, 23, 34, 21, 12.23, 123.3};
    float total = 0;
    float average = 0;
    for(int i = 0; i < 10; i++) {
        cin>>weight[i];
    }

    cout<<"Your entered weights are: "<<endl;

    for(int i = 0; i < 10; i++) {

        cout<<weight[i]<<endl;
    }

    for(int i = 0; i < 10; i++) {

        total = total + weight[i];

    }

    cout<<endl;

    cout<<"Total weights of students are: "<<total<<endl;

    average = total/10;

    cout<<"Average weight of your class is: "<<average<<endl;

    return 0;
}
