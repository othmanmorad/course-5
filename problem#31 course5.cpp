
#include <iostream>
#include <string>
using namespace std;
int ReadPositivenumber(string message)
{
    int number;
    do
    {
        cout << message;
        cin >> number;

    } while (number < 0);
    return number;
}


void SwapNumber(int& num1, int& num2)
{
    int Temp = num1;
    num1 = num2;
    num2 = Temp;

}


void FillArrayByRandoomNumber(int arr[100], int& Length)
{
   
    for (int i = 0;i <= Length;i++)
        arr[i] = i + 1;
}

int RandoomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void SuffleNumber(int arr[100], int Length)
{
    for (int i = 0;i < Length;i++)
    {
        SwapNumber(arr[RandoomNumber(1, Length) - 1], arr[RandoomNumber(1, Length )- 1]);
    }

}


void PrintArray(int arr[100], int Length)
{
    for (int i = 0;i <= Length;i++)
        cout << arr[i] << " ";
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int Length = ReadPositivenumber("How many elements you want ? ");

    FillArrayByRandoomNumber(arr, Length);

   

    cout << "Arry element befor Shuffle \n";
    PrintArray(arr, Length);
           
        
    SuffleNumber(arr, Length);

    cout << "\nArry element after Shuffle \n";
    PrintArray(arr, Length);

}

