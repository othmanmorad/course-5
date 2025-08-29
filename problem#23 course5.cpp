#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandoomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayByRandoomNumber(int arr[100],int &Length )
{
    cout << "Enter Number of element : " << endl;
    cin >> Length;
    for (int i = 0;i <= Length;i++)
        arr[i] = RandoomNumber(1,100);
    cout << "\n";
}

void PrintArray(int arr[100], int Length)
{
    for (int i = 0;i <= Length;i++)
       cout<< arr[i] <<" ";
}
int main()
{
    srand((unsigned)time(NULL));
    
    int arr[100];
    int Length;

    FillArrayByRandoomNumber( arr, Length);

    cout << "\nArray Elements : ";
    PrintArray(arr, Length);

    return 0;
}

