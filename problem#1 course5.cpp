#include <iostream>
#include<string>
using namespace std;


void PrintTableHeader()
{
    cout << "\n\n\t\t\t Miltiplication Table Header \n\n";

    cout << "\t";

    for (int i = 1;i <= 10;i++)
    { 
        cout << i << "\t";
    }
    
    cout<<"\n___________________________________________________________________________________\n" << endl;
}

string ColmunSparetor(int i)
{
    if (i < 10)
        return "     |";
    else 
        return "    |";
}
void PrintMiltiplicationTable()
{
    PrintTableHeader();
    
    for (int i = 1;i <= 10;i++)
    {
        cout << " " << i << ColmunSparetor(i);
        {
            for (int j = 1;j <= 10;j++)

                cout << i * j <<"\t";
            
        }
        cout << endl;
    }
}
int main()
{
    
    PrintMiltiplicationTable();
  
}

