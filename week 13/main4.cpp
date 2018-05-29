#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Quick! Send for Count Graystone.");
    string s2("Lord");
    string s3("Don't ");
    cout<<s1.size()<<endl;
    s1.erase(0, 7); //Remove first seven characters
    cout<<s1<<endl;
    s1.replace(9, 5, s2);
    cout<<s1<<endl;
    s1.replace(0, 1, "s");
    cout<<s1<<endl;
    s1.insert(0, s3);
    cout<<s1<<endl;
    cout<<"Size of s1 = "<<s1.size()<<endl;
    s1.erase(s1.size()-1, 1);
    cout<<s1<<endl;
    s1.append(3, '!');
    cout<<s1<<endl;
    int x = s1.find(' ');
    cout<<x<<endl;
    cout<<s1.size()<<endl;
    while( x < s1.size()) {
        s1.replace(x, 1, "_");
        x = s1.find(' ');
    }
    cout<<s1<<endl;

    return 0;
}
