#include <iostream>
#include <string>
using namespace std;

string ReadPassword(string message)
{
    string Password;
    cout << message;
    cin >> Password;

    return Password;
}
bool CuessPassword(string OrginalPassword)
{
    string word = "";
    int counter = 0;

    cout << "\n";

    for (int i = 65;i <= 90 ;i++)
    {
        for (int j = 65 ;j <= 90 ;j++)
        {
            for (int k = 65 ;k <= 90 ;k++)
            {
                counter++;

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << "Trail [" << counter << "]" << word<<endl;
                
                if (word == OrginalPassword)
                {
                    cout << "\nPassword is "<<word << endl;
                    cout << "Found after " << counter << " Trail(s)\n";

                    return true;
                }
                word = "";
            }
        }
    }
    return false;
}
int main()
{
    CuessPassword(ReadPassword("Please enter password ? "));
    return 0;
}

