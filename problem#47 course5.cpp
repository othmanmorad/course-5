#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

float GetFractionalPart(float Number)
{          
    return Number - (int)Number;
}
float MyRound(float Number)
{
    int IntPart;
    IntPart = int(Number);

    float Factions = GetFractionalPart(Number);

    if (abs(Factions) >= 0.5)
    {
        if (Number>0)
        return ++IntPart;
    

    else

        return --IntPart;
    }

    else 
        
    {
        return IntPart;
    }

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

    cout << "\nMy round result : " << MyRound(Number) << endl;

    cout << "\nC++ round result : " << round(Number) << endl;

    return 0;
}