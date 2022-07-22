#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue> 

using namespace std;

int main() 
{
    vector<int> q;
    vector<int> Answer;
    int K;
    int N;
    
    cin>> N;
    cin>> K;
    
    for(int i =0; i<N; i++)
        q.push_back(i+1);

    for(int j = 0; j<N; j++)
    {
        for(int k = 0; k<K-1; k++)
        {
            q.push_back(q.front());
            q.erase(q.begin());
        }
        Answer.push_back(q.front());
        q.erase(q.begin());
    } 

    for(int i =0; i<N; i++)
        cout << Answer[i];


}