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

void PrintAllDigitFrequency(int Number)
{
    for (int i = 0;i < 10;i++)
    {
       
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);

        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is "
                << DigitFrequency << " Time(s).\n";
        }

    }
}
int main()
{
    int Number =ReadPositiveNumber("Please enter main number");
    PrintAllDigitFrequency(Number);

    return 0;
}
