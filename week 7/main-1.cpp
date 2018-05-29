#include <iostream> // programe to display character of your chooice above or below data type ranges

using namespace std;

void starline(char ch, int number_of_times) {

    for(int i = 0; i<number_of_times; i++) {
        cout<<ch;
    }
}




int main()
{
    char ch;
    int num;
    cout<<"Enter character to display"<<endl;
    cin>>ch;
    cout<<"Enter number of times to display that character"<<endl;
    cin>>num;
    starline(ch, num); //function calling
    cout<<"\nData Types Range"<<endl;
    starline(ch, num);cout<<endl;
    cout<<"char -128 to 127"<<endl
         <<"short -32,768 to 32,767"<<endl
         << "integer System dependent"<<endl
         << "long -2,147,483,648 to 2,147,483,647"<<endl;
     ch = '#';
     num = 40;
    starline(ch, num);
    return 0;
}

