#include <iostream>
#include<string>
using namespace std;

enum enPrimeOrNotPrimeNumber { Prime = 1, NotPrime = 2 };

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


int RandoomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayByRandoomNumber(int arr[100], int& arrLength)
{
    cout << "Enter Number of element : " << endl;
    cin >> arrLength;
    for (int i = 0;i < arrLength;i++)
        arr[i] = RandoomNumber(1, 100);
    cout << "\n";
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";
}


void AddArrayElements(int Number, int arr[100], int& arrLength)
{
    arrLength++;

    arr[arrLength - 1] = Number;
}


void CopyOnlyPrimeryNumber(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
   
    for (int i = 0;i < arrLength;i++)
    {
        if (CheckPrimeOrNotPrimeNumber(arrSource[i]) == enPrimeOrNotPrimeNumber::Prime)
        {
            AddArrayElements(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
    
}




int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength=0;

    FillArrayByRandoomNumber(arr, arrLength);

    int arr2[100];
    int arr2Length=0;

    CopyOnlyPrimeryNumber(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements :\n";
    PrintArray(arr, arrLength);

    cout << "\nPrime number in Array :\n";
    PrintArray(arr2, arr2Length);

}
