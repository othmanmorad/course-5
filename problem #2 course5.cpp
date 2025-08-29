#include <iostream>
#include <string>
#include<cmath>
using namespace std;

enum enPrimeOrNotPrimeNumber { Prime = 1, NotPrime = 2 };
int ReadPositiveNumber(string message)
{
    int number=0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}
enPrimeOrNotPrimeNumber CheckPrimeOrNotPrimeNumber(int number)
{
   
    
        if (number < 2)
        {
            return enPrimeOrNotPrimeNumber::NotPrime;
        }
        int m = round(number / 2);
        for (int counter = 2;counter <= m;counter++)
        {
            if (number % counter == 0)
                return enPrimeOrNotPrimeNumber::NotPrime;
        }

        return enPrimeOrNotPrimeNumber::Prime;
    
}

void PrintSum(int number)
{
    cout << "\n";
    cout << "Prime Numbers from " << 1 << " To " << number << " are : " << endl;
    for (int i = 1;i <= number;i++)
    {

        if (CheckPrimeOrNotPrimeNumber(i) == enPrimeOrNotPrimeNumber::Prime)
            cout << i << endl;
    }
}
int main()
{
    PrintSum(ReadPositiveNumber("Please enter positive number"));
    return 0;
}
