#include<iostream>
using namespace std;

int main()
{
    double firstNumber, secondNumber, sum, sub, multi, div;

    cout << "Input First Number: ";
    cin >> firstNumber;

    cout << "Input Second Number: ";
    cin >> secondNumber;

    sum = firstNumber + secondNumber;
    cout << "Sum= " << sum << "\n";

    sub = firstNumber - secondNumber;
    cout << "Sub= " << sub << "\n";

    multi = firstNumber * secondNumber;
    cout << "Multi= " << multi << endl;

    div = firstNumber / secondNumber;
    cout << "Div= " << div << endl;

    return 0;
}
