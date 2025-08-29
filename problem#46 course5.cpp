#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;


float ReadNumber()
{
    int number;
    
   
        cout << "Enter the number ";
        cin >> number;
 
    return number;
}

float MyAbs(int Number)
{

    if (Number > 0)
    
        return Number;
    
    else
        return Number * -1;
}


int main()
{
    float Number = ReadNumber();

    cout << "\nMy abs result : " << MyAbs(Number)<<endl;

    cout << "\nC++ abs result : " << abs(Number)<<endl;
}