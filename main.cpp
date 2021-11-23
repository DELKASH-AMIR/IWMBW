#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    //operator
    int sum;
    int mines;
    int Multiplies;
    int devide;
    int Reminder;
    int Exponentiation;
    //variable
    int first;
    int second;

    string Operator;
    cout << "Enter First Number: ";
    cin >> first;
    cout << "Enter Second Number: ";
    cin >> second;
    cout << "Enter The Operator |+,-,*,/,%,**| : ";
    cin >> Operator;
    if (Operator == "+"){
        sum = first + second;
        cout << sum << endl;
    }
    if (Operator == "-"){
        mines = first - second;
        cout << mines << endl;
    }
    if (Operator == "*"){
        Multiplies = first * second;
        cout << Multiplies << endl;
    }
    if (Operator == "/"){
        devide = first / second;
        cout << devide << endl;
    }
    if (Operator == "%"){
        Reminder = first % second;
        cout << Reminder << endl;
    }
    if (Operator == "**"){
        Exponentiation = pow(first , second);
        cout << Exponentiation << endl;
    }

    return 0;
}
