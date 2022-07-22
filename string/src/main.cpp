#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	string A, B;
    int tmp = 0;
    int cnt = 0;
    int SizeA = 0;
	int SizeB = 0;

    cin >>A;
    cin >>B;

    SizeA = A.length();
	SizeB = B.length();
    int MinSize = SizeA;

	for (int i = 0; i <= SizeB - SizeA; i++) 
    {
		cnt = 0;
		for (int j = 0 ; j < SizeA; j++) 
            if (A[j] != B[i+j]) cnt++;
		
		MinSize = min(MinSize, cnt);
	}

	cout << MinSize << endl;
}