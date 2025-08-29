#include <iostream>
using namespace std;

string ReadName(string message)
{
    string name;
    cout << message;
    cin >> name;
    return name;

}
void PrintEncryptionAndDecryptionName(string name)
{
    cout << "Name befor encryption " << name<<endl;
    cout << "Name after encryption " << "************"<<endl;
    cout << "Name after decryption " << name<<endl;
}

int main()
{
    PrintEncryptionAndDecryptionName(ReadName("Please enter your name "));
}

