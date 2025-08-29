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

int EvenCount(int arrSource[100], int& arrLength)
{
    int counter = 0;

    for (int i = 0;i < arrLength;i++)

    {
        if (arrSource[i] % 2 == 0)
        {
            counter++;
        }
    }

    return counter;

}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayByRandoomNumber(arr, arrLength);


    cout << "\nArray 1 Elements :\n";
    PrintArray(arr, arrLength);

    cout << "\nEven Numbers count is : ";

    cout << EvenCount(arr, arrLength) << endl;

    return 0;
}