#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandumNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int main()
{
    srand((unsigned)time(NULL));
    
    cout << RandumNumber(1, 10) << endl;
    cout << RandumNumber(1, 10) << endl;
    cout << RandumNumber(1, 10) << endl;
}

