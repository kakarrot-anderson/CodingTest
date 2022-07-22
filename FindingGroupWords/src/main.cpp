#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string input[100];
    char search;
    int num      = 0;
    int found    = 0;
    int j,k,l    = 0;
    int pre_l    = 0;
    int exit     = 0;

    cin >> num;
    
    for(int i = 0; i<num; i++) cin >> input[i];
    for(j = 0; j<num; j++){    //search array
        pre_l = 0;
	    for(k = 0; k<input[j].length(); k++){ //search word
            search = input[j][k];
            exit = 0;
            for(l = k; l<input[j].length(); l++){ //search spell
                if(input[j][l] == search){
                    if(pre_l+1 != l && l!=0 ) exit = 1;
                    if(pre_l == l) exit = 0;
                    pre_l = l;
                }
                if(exit == 1)break;
            }
            if(exit == 1) break;
        }
        if(exit == 0)found++;
    }
    cout<< found << endl;
}