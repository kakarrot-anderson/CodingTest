#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int Num;
    int count = 0;
    int title = 666;
    string st;

    cin >> Num;

    while(1)
    {
        st = to_string(title);
        if(to_string(title).find("666")!= string::npos) count++;
        title++;
        if(Num == count) break;
    }
    cout <<st<<endl;
}