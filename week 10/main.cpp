#include <iostream> // one copy for all object is know as static variable

using namespace std;

class Counter{
static int cnt; //static variable declaration
public:
    Counter() {

        cnt++;

    }

    int getCount() {
       return cnt;
    }


};

   int Counter::cnt=0;

int main()
{
    Counter c1, c2;
    Counter c3;

    cout<<"c1 value is = "<<c1.getCount();
    cout<<endl;
    cout<<"c2 value is = "<<c2.getCount();
    cout<<endl;
    cout<<"c3 value is = "<<c3.getCount();
    cout<<endl;
    return 0;
}
