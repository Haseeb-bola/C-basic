#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int x = 1, y = 1;
    char ch = 'z';

    while(ch != '\r') {
        cout<<"\nYour current location is: "<<x<<"  "<<y<<endl;
        cout<<"\nEnter n to move North"<<
              "\nEnter s to move South"<<
              "\nEnter e to move East"<<
              "\nEnter w to move West"<<endl;
        ch = getche();
        switch(ch) {

            case 'n': y++;break;
            case 's': y--;break;
            case 'e': x++;break;
            case 'w': x--;break;
            case '\r': cout<<"Exiting from game"; exit(0);
            default: cout<<"Enter correct direction"<<endl;

        }
        if(x == -5  && y == 9) {cout<<"\nYou found the treasure"<<endl;exit(0);}
        if((x>=3 && x<=7) && (y<=-3 && y>=-5)){
            cout<<"\nCaught in trap. Mission failed, Try again"<<endl; exit(0);
        }
    }
    return 0;
}
