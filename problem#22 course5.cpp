#include <iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}
void ReadArray(int arr[100],int &arrLength)
{
    cout << "Enter number of element" << endl;
    cin >> arrLength;

    cout << "\nEnter element of arry " << endl;

    for (int i = 1;i <= arrLength;i++)
    {
        cout << "Elment [" << i << "]" << endl;
        cin >> arr[i];
    }
    cout << endl;
}
void PrintArray(int arr[100], int arrLength)
{

    for (int i = 1;i <= arrLength;i++)
    {
        cout <<arr[ i ]<< " " ;
       
        cout << "\n";
    }
   
}
int TimeRepeated(int Number, int arr[100], int arrLength)
{
    int counter = 0;
    for (int i = 1;i <= arrLength-1;i++)
    {
        if (Number == arr[i])
        {
            counter++;
        }

    }
    return counter;
}

int main()
{
    int arr[100];
    int arrLength;
    int NumberToCheck;

    ReadArray(arr, arrLength);

    NumberToCheck = ReadPositiveNumber("Please enter the number you want to check : ");

    cout << "\nOrginal arry : ";
     PrintArray(arr, arrLength);


     cout << "Number " << NumberToCheck;
     cout << " Is Repeated ";
     cout << TimeRepeated(NumberToCheck, arr, arrLength);
     
}

