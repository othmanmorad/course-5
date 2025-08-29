#include<iostream>
#include<cmath>
using namespace std;

float MySqrt(float Number)
{
    return pow(Number, 0.5);
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

    cout << "\nMy sqrt result : " << MySqrt(Number) << endl;

    cout << "\nC++ ceil result : " << sqrt(Number) << endl;

    return 0;
}