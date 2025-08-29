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

void PrintLetterPattern(int Number)
{

    cout << "\n";

    for (int i = 65 ; i <= 65+Number-1; i++)
    {


        for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
        {
            cout << (char)i;
        }
        cout << endl;
    }
}

int main()
{
    PrintLetterPattern(ReadPositiveNumber("Please enter a positive number "));
    return 0;
}

