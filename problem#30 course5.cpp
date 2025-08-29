#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandoomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}
void FillArrayByRandoomNumber(int arr[100], int& Length)
{
    for (int i = 0;i < Length;i++)
        arr[i] = RandoomNumber(1, 100);
    cout << "\n";


}

void PrintArray(int arr[100], int Length)
{
    for (int i = 0;i < Length;i++)
        cout << arr[i] << " ";
}
void SumArray(int arr[100],int arr2[100],int arrSum[100], int Length)
{

  
    for (int i = 0;i < Length;i++)
    {
        arrSum [i] = arr[i] + arr2[i];
    }

   
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrSum[100],  arr2[100];
   
   
    int Length = ReadPositiveNumber("How many elments ?\n");
    FillArrayByRandoomNumber(arr, Length);
    FillArrayByRandoomNumber(arr2, Length);

    SumArray(arr, arr2, arrSum, Length);

    cout << "\nArray 1 Elements  :\n";
    PrintArray(arr, Length);

    cout << "\nArray 2 Elements  :\n";
    PrintArray(arr2, Length);

    cout << "\n\nSum of array1 and array2 elements : \n";
    PrintArray(arrSum,Length);
    return 0;
}

