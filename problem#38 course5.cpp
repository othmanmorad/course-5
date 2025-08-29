#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

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


void CopyOddNumbers(int arrSource[100], int arrDestination[100], int& arrLength, int& arrDestinationLength)
{

    for (int i = 0;i < arrLength;i++)

    {
        if (arrSource[i] % 2 != 0)
        {
            AddArrayElements(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
        


}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayByRandoomNumber(arr, arrLength);

    int arr2[100];
    int  arr2Length = 0;

    CopyOddNumbers(arr, arr2, arrLength, arr2Length);


    cout << "\nArray 1 Elements :\n";
    PrintArray(arr, arrLength);


    cout << "\nArray 2 odd numbers :\n";
    PrintArray(arr2, arr2Length);
    return 0;
}
