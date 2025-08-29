#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandoomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayByRandoomNumber(int arr[100], int& Length)
{
    cout << "\n Enter number of elements :\n";
    cin >> Length;
    for (int i = 0;i < Length;i++)
        arr[i] = RandoomNumber(1, 100);
    cout << "\n";
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
    return FindPositionNumberInArray(Number, arr, Length)!=-1;
}
void PrintArray(int arr[100], int Length)
{
    for (int i = 0;i < Length;i++)
        cout << arr[i] << " ";
}
int ReadNumber()
{
    int number;
    do
    {
        cout << "\nPlease enter a number t search for ?\n";
        cin >> number;
    } while (number < 0);

    return number;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int Length;

    FillArrayByRandoomNumber(arr, Length);

    cout << "\nArray  1 Elements :\n";
    PrintArray(arr, Length);

    int Number = ReadNumber();
    cout << "\nNumber you looking for : " << Number << endl;

  
    if (IsNumberInArray(Number, arr, Length))
    {

        cout << "yes,The number is found : (-\n";
    }
    else
    {
        cout << "No,The number is not found :-(\n";
    }
    return 0;
}
