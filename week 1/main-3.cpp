#include <iostream> //programe to disply number in ascending order

using namespace std;

int main()
{
    int first_number, second_number, third_number;
    int small, medium, large;

    cout<<"Please enter three numbers that you want to sort: "<<endl;
    cin>>first_number>>second_number>>third_number;
    cout<<"You entered: "<<first_number<<"  "<<second_number<<"  "<<third_number<<endl;

    if(first_number <= second_number && first_number <= third_number)
    {
        small = first_number;
        if(second_number <= third_number)
        {
            medium = second_number;
            large = third_number;
        }
        else {
                medium = third_number;
                large = second_number;

        }
    }

    if(second_number <= first_number && second_number <= third_number)
    {
        small = second_number;
        if(first_number <= third_number)
        {
            medium = first_number;
            large = third_number;
        }
        else {
            medium = third_number;
            large = first_number;
        }
    }


    if(third_number <= first_number && third_number <= second_number)
    {

          small = third_number;
          if(first_number <= second_number)
          {
              medium = first_number;
              large = second_number;
          }
          else {
            medium = second_number;
            large = first_number;
          }
    }

    cout<<"\nNumber in ascending orders are: "<<small<<"  "<<medium<<"  "<<large<<endl;










    return 0;
}
