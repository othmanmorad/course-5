#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int number;
    cout << "Please enter a number "<<endl;
    cin >> number;
    return number;
}


void AddArrayElements(int Number,int arr[100], int &arrLength)
{
    arrLength++;

    arr[arrLength - 1] = Number;
}


void InputuserNumbersInArray( int arr[100], int &arrLength)
{ 
   bool AddMore= true;

    do {
        AddArrayElements(ReadNumber(),  arr,  arrLength);

        cout << "Do you want to add more numbers ? [0]:No,[1]yes" << endl;
        cin >> AddMore;
    } while (AddMore);
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0;i < arrLength;i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[100];
    int arrLength=0;

    InputuserNumbersInArray(arr, arrLength);

    cout << "Array Length= " << arrLength << endl;
    cout << "Array elements : ";
    PrintArray(arr, arrLength);
    
}

