#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    string Num;
    cin >> Num;
    sort(Num.begin(), Num.end(), greater<char>());
    cout<< Num;
}