#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "++++++" << endl;
    cout << "++++++" <<setw(5)<<"++"<<setw(8)<<"++"<<endl;

    cout<<"+++"<<setw(10)<<"++++++"<<setw(8)<<"++++++"<<endl;
    cout<<"+++"<<setw(10)<<"++++++"<<setw(8)<<"++++++"<<endl;

    cout << "++++++" <<setw(5)<<"++"<<setw(8)<<"++"<<endl;
    cout << "++++++" << endl;
    return 0;
}
