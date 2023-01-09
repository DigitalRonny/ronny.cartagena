#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void comb(int N, int K)
{
    string bitmask(K, 1); 
    bitmask.resize(N, 0); 
    
    do {
        for (int i = 0; i < N; ++i) 
        {
            if (bitmask[i]) cout << " " << i;
        }
        cout << endl;
    } while (prev_permutation(bitmask.begin(), bitmask.end()));
}
