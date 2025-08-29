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
int SumOfDigits(int number)
{   
    int sum = 0;
    int Remainder = 0;

    while (number > 0)
    {
        Remainder = number % 10;
        number = number / 10;
        sum += Remainder;
    }

    return sum;
}
int main()
{
    cout<<"\nSum Of Digits ="<<
    SumOfDigits(ReadPositiveNumber("Please enter positive number"))
    << "\n";

    return 0;
}

