#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
float MyFloor(float Number)
{
    
     if (Number > 0)

        return int(Number);
   
    else

        return int(Number) -1 ;
    

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

    cout << "\nMy Floor result : " << MyFloor(Number) << endl;

    cout << "\nC++ Floor result : " << floor(Number) << endl;

    return 0;
}