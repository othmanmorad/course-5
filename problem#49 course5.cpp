#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

float GetFractionsNumber(float Number)
{
    return Number - int(Number);
}
float MyCeil(float Number)
{
    if (abs(GetFractionsNumber(Number)) > 0)
    {
        if (Number > 0)

            return int(Number) + 1;

        else

            return int(Number);
    }
    else
        return Number;
}

float ReadNumber()
{
    float number;


    cout << "Please Enter a float number ";
    cin >> number;

    return number;
}


int main()
{
    float Number = ReadNumber();

    cout << "\nMy ceil result : " << MyCeil(Number) << endl;

    cout << "\nC++ ceil result : " << ceil(Number) << endl;

    return 0;
}