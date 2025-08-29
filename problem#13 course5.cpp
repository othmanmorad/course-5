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

void PrintNumberPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
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
    PrintNumberPattern(ReadPositiveNumber("Please enter a positive number "));
    return 0;
}

