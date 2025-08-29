#include <iostream>
#include <string>
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
bool isPerfectNumber(int number)
{

    int sum = 0;

    for (int counter = 1;counter < number;counter++)
    {
        if (number % counter == 0)
            sum += counter;
    }

    return number == sum;

}
void PrintPerfectNumbersFrom1ToN(int number)
{
    for (int i = 1;i <= number;i++)
    {
        if (isPerfectNumber(i)==true)
            cout << i<<endl;
    }

}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter positive number"));
}

