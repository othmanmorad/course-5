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
int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandumCharcter(enCharType::SmallLetter) << endl;
    cout << GetRandumCharcter(enCharType::CapitalLetter) << endl;
    cout << GetRandumCharcter(enCharType::SpecialCharacter) << endl;
    cout << GetRandumCharcter(enCharType::Digit) << endl;

    return 0;
}

