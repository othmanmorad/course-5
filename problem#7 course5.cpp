#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}
int ReverseNumber(int number)
{
    int Remainder = 0;
    int number2 = 0;

    while (number > 0)
    {
        Remainder = number % 10;
        number = number / 10;
        number2 = number2 * 10 + Remainder;
    }

    return number2;
}
int main()
{
    cout<<"\nReverse is :\n"<<
    ReverseNumber(ReadPositiveNumber("Please enter positive number"))
    << "\n";

    return 0;
}

