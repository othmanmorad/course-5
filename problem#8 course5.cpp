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
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Remainder = 0;
    int FreqCount = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}
int main()
{
    
   int Number= ReadPositiveNumber("Please enter main number ( Positive )");
   int DigitToCheck = ReadPositiveNumber("Please enter one digit to check ( positive )");

   cout << "\nDigit " << DigitToCheck<< " Frequncy is " << CountDigitFrequency( DigitToCheck, Number)<<" Time(s).\n";

   return 0;
}
