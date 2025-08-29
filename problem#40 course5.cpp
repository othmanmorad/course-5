#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;



void FillArrayByRandoomNumber(int arr[100], int& arrLength)
{
    arrLength = 10;

    arr[0] =  10  ;
    arr[1] =  10  ;
    arr[2] =  10  ;
    arr[3] =  50  ;
    arr[4] =  50  ;
    arr[5] =  70  ;
    arr[6] =  70  ;
    arr[7] =  70  ;
    arr[8] =  70  ;
    arr[9] =  90  ;
  
}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";
}
short FindPositionNumberInArray(int Number, int arr[100], int Length)
{
    for (int i = 0; i < Length;i++)
    {
        if (arr[i] == Number)

            return i;
    }
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int Length)
{
    return FindPositionNumberInArray(Number, arr, Length) != -1;
}
void AddArrayElements(int Number, int arr[100], int& arrLength)
{
    arrLength++;

    arr[arrLength - 1] = Number;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationlLength)
{
    for (int i = 0; i < SourceLength;i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationlLength))
        {
            AddArrayElements(arrSource[i], arrDestination, DestinationlLength);
        }
    }
   
}

int main()
{
    int arrSource[100];
    int SourceLength = 0;
    FillArrayByRandoomNumber(arrSource, SourceLength);


    cout << "\nArray 1 element (with frequancy)\n";
    PrintArray(arrSource, SourceLength);


    int arrDestination[100];
    int DestinationlLength =0;

    CopyDistinctNumbersToArray(arrSource,arrDestination , SourceLength, DestinationlLength);

    cout << "\nArray 2 distinct element (without frequancy)\n";
    PrintArray(arrDestination, DestinationlLength);

    return 0;
}