#include <iostream>

using namespace std;
void starline();// function declaration
int main()
{
    starline();  //function calling
    cout<<endl<<"Data Types Ranges"<<endl;
    starline();cout<<endl;
    cout<<"char -128 to 127"<<endl
         <<"short -32,768 to 32,767"<<endl
         << "integer System dependent"<<endl
         << "long -2,147,483,648 to 2,147,483,647"<<endl;
    starline();




    return 0;
}

void starline() { //function definition

     for(int i=0; i<45; i++) {

        cout<<"-";
     }
}
