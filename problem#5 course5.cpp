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
void PrinDigits(int number)
{
    int Remainder = 0;

    while (number > 0)
    {
        Remainder = number % 10;
        number = number / 10;
        cout << Remainder << endl;
    }


}
int main()
{
    PrinDigits(ReadPositiveNumber("Please enter positive number"));

}

