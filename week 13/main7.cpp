#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Man");
    string s2 = " Beast ";
    string s3;
    s3 = s1;
    cout<<"s3 = "<<s3<<endl;
    s3 = "Neither " + s1 + " nor ";
    cout<<"s3 = "<<s3<<endl;
    s3 += s2;
    cout<<"s3 = "<<s3<<endl;
    s1.swap(s2);
    cout<<s1<< " nor "<<s2<<endl;
    string s4 = "Muhammad ";
    s4 +=  "Imran";
    cout<<s4<<endl;

    return 0;
}
