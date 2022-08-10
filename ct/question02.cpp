#include<iostream>
using namespace std;
int main()
{
    double number;
    cout<<"Input a number: ";
    cin >> number;
    


    if(number >= 80 && number <= 100)
    {
        cout << "You got A+\n";
    }
    else if(number >= 70 && number <= 79)
    {
        cout << "You got A\n";
    }
    else if(number >= 60 && number <= 69)
    {
        cout << "You got A-\n";
    }
    else if(number >= 50 && number <= 59)
    {
        cout << "You got B\n";
    }
    else if(number >= 40 && number <= 49)
    {
        cout << "You got C\n";
    }
    else if(number >= 33 && number <= 39)
    {
        cout << "You got D\n";
    }
    else if(number < 33 && number >= 0 || number == 5)
    {
        cout << "You got F\n";
    }
    else
    {
        cout << "PLease input valid number!\n";
    }



    return 0;
 
}
