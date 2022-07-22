#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int ArrayNum[100];
    int Number = 0;
    int Answer = 0;
    int den = 0;

    cin >> Number;
    for(int i = 0; i<Number; i++) cin >> ArrayNum[i];
    
    for(int j = 0; j<Number; j++){    //search array
        for(den = 2; den <ArrayNum[j]; den++){
            if(ArrayNum[j]%den==0) break;
        }
        if(den == ArrayNum[j]) Answer++;
    }
    cout<< Answer << endl;
}