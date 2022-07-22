#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    string Board;
    string AAAA = "AAAA";
    string BB = "BB";

    cin >> Board;

    while(Board.find("XXXX") != -1) Board.replace(Board.find("XXXX"), 4, AAAA);
    while(Board.find("XX") != -1)   Board.replace(Board.find("XX"), 2, BB);

    if(Board.find("X") == -1)  cout << Board<< endl;
    else  cout << "-1"<< endl;
}