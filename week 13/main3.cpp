#include <iostream> //progarme to display name , nickname , address , using string class
#include <string>

using namespace std;

int main()
{
    string full_name, nickname, address;
    string greeting("Hello, ");
    cout<<"Enter you full name: "<<endl;
    getline(cin, full_name);
    cout<<"Your full name is: "<<full_name<<endl;
    cout<<"Enter you nickname"<<endl;
    cin>>nickname;
    greeting += nickname;
    cout<<greeting<<endl;
    cout<<"Enter your address in multiple lines: "<<endl;
    getline(cin, address, '$');
    cout<<"Your address is: "<<address<<endl;

    return 0;
}
