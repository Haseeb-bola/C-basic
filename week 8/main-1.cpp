#include <iostream> // function overloading

using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);
void repchar(char, char);



int main()
{
    repchar();
    cout<<endl;
    repchar('+');
    cout<<endl;
    repchar('$', 70);
    cout<<endl;
    repchar('@', '#');
    cout<<endl;

    return 0;
}


    void repchar() {
         for(int i = 0; i<45; i++) {
            cout<<'*';
         }
    }

    void repchar(char ch) {
         for(int i = 0; i<45; i++) {
            cout<<ch;
         }
    }





    void repchar(char ch, int num) {
         for(int i = 0; i<num; i++) {
            cout<<ch;
         }
    }


    void repchar(char ch1, char ch2) {
         for(int i = 0; i<5; i++) {
                cout<<ch1;
                for(int j = 0; j<5; j++) {

                    cout<<ch2;

                }

         }
    }














