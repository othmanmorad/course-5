#include<iostream>
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

    return number==sum;

}

void PrintResults(int number)
{
    
    

        if (isPerfectNumber(number))
            cout << number << " Is a Perfect number.\n" <<endl;
        else
            cout << number << " Is Not Perfect number.\n" << endl;
    
}
int main()
{
    PrintResults(ReadPositiveNumber("Please enter positive number"));
    return 0;
}

