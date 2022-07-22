#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue> 

using namespace std;

int main() 
{
    vector<int> q;
    vector<string> Answer;
    vector<string> v;
    string number;
    int K;
    int N;
    
    cin>> N;
    for(int i =0; i<N; i++)
    {
        cin>> number;
        v.push_back(number);
    }

    
    for(int k=1; k<number.size(); k++)
    {
        for(int l=0; l<N; l++)
        {   
            cout<<"word :"<<v.at(0).back()<<endl;
            cout<<"full :"<<v.at(k)<<endl;
            cout<<v.at(k).find(v.at(0).back())<<endl;
        }
    }
    

}