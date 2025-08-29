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
int SumArray(int arr[100], int arrLength)
{

    int Sum = 0;
   
    for (int i = 0;i < arrLength;i++)
    {
        Sum += arr[i];
        
    }

    return Sum ;
}
float ArrayAverage(int arr[100], int arrLength)
{
    return (float)SumArray(arr, arrLength) / arrLength;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int Length;

    FillArrayByRandoomNumber(arr, Length);

    cout << "\nArray Elements : ";
    PrintArray(arr, Length);


    cout << "\nAverage of all number is :  ";
    cout << ArrayAverage(arr, Length);
    return 0;
}

