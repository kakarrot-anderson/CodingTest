#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int Number = 0;
    unsigned long long int Factorial = 1;
    int Answer = 0;
    string StrNumber;

    cin >> Number;

    for(int i = 0; i<Number; i++)  Factorial=(Number-i)*Factorial;
    StrNumber = to_string(Factorial);
    cout << StrNumber<<endl;
    for(int i = 0; i<StrNumber.length(); i++)if(StrNumber[i] == '0') Answer++;

    cout << Answer<<endl;
}