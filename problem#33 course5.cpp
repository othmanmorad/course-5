#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int RandumNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4,
};
char GetRandumCharcter(enCharType CharType)
{
    switch (CharType)
    {

    case enCharType::SmallLetter:
    {
        return char(RandumNumber(97, 122));
        break;
    }


    case enCharType::CapitalLetter:
    {
        return char(RandumNumber(65, 90));
        break;
    }


    case enCharType::SpecialCharacter:
    {
        return char(RandumNumber(33, 47));
        break;
    }

    case enCharType::Digit:
    {
        return char(RandumNumber(48, 57));
        break;
    }
    }
    return '0';
}

string GenerateWord(enCharType CharType, short Length)
{
    string Word;

    for (int i = 1; i <= Length;i++)
    {
        Word = Word + GetRandumCharcter(CharType);
    }
    return Word;
}
string GenerateKey()
{
    string Key = "";
    {
        Key = GenerateWord(CapitalLetter, 4) + " - ";
        Key = Key + GenerateWord(CapitalLetter, 4) + " - ";
        Key = Key + GenerateWord(CapitalLetter, 4) + " - ";
        Key = Key + GenerateWord(CapitalLetter, 4);

        return Key;
    }
}


void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n";
    for (int i = 0;i < arrLength;i++)
    {
        cout << "Array [" << i +1<< "] ";
        cout << arr[i] << endl;
    }
    cout << "\n";
}

void FillArrayByRandoomNumber(string arr[100], int& arrLength)
{
   
    for (int i = 0;i < arrLength;i++)

        arr[i] = GenerateKey();

}


int ReadPositiveNumber(string message)
{
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}
int main()
{
    srand((unsigned)time(NULL));
    string arr[100];
    int arrLength=ReadPositiveNumber("How many keys you want to genrate\n");

    FillArrayByRandoomNumber(arr, arrLength);

    PrintStringArray(arr, arrLength);

    return 0;
}