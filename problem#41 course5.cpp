#include <iostream>
#include <string>
using namespace std;



void FillArrayByRandoomNumber(int arr[100], int& arrLength)
{
    cout << "Enter Number of element : " << endl;
    cin >> arrLength;

    cout << "Enter array element";
    for (int i = 0;i < arrLength;i++)
        arr[i];
    cout << "\n";
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";
}
void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{

    for (int i = 0;i < arrLength;i++)

        arrDestination[i] = arrSource[arrLength - 1 - i];
}

bool IsPalindromNumber(int arr[100])
{
    return arr[i] == ReverseNumber(Number);

}
int main()
{
    if (IsPalindromNumber(ReadPositiveNumber("Please enter a positive number ?")))

        cout << "\nYes , it is a Palindrom number.\n";

    else
        cout << "\nNo , it is Not  a Palindrom number.\n";

    return 0;

}