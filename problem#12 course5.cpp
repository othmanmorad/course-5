
#include <iostream>
#include<string>
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

void PrintInvertedNumberPattern(int Number)
{
    for (int i = Number; i >= 1; i--)
    {


        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number "));
    return 0;
}


