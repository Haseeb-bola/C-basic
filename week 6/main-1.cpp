#include <iostream>

using namespace std;

int main()
{
   struct student {
       int regNo;
       string name;
       float gpa;

   };

   student aqib, haseeb, ahmad;

   aqib = {1, "aqib", 3.4};
   haseeb = {2,"ahmad", 3.3};
   ahmad = haseeb;
   haseeb.name = "haseeb";
   haseeb.regNo = 3;
   haseeb.gpa = 4.1;

   cout<<"Aqib information "<<aqib.regNo<<" "<<aqib.name<<" "<<aqib.gpa<<endl;
   cout<<"haseeb information "<<haseeb.regNo<<" "<<haseeb.name<<"  "<<haseeb.gpa<<endl;
   cout<<"Ahmad information "<<ahmad.regNo<<"  "<<ahmad.name<<"  "<<ahmad.gpa<<endl;
    return 0;
}
