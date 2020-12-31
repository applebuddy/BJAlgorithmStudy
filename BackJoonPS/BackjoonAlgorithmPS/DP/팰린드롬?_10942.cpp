//
//  팰린드롬?_10942.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 팰린드롬? 10942
// MARK: DP C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> V(N,0);
    vector<vector<int>> DP(N, vector<int>(N,0));
    for(int i=0; i<N; i++) cin>>V[i];
    
    for(int i=0; i<N; i++) {
        DP[i][i] = 1;
        int width = 0;
        while(i-width-1 >= 0 && i+width+1 < N && V[i-width-1] == V[i+width+1]) {
            DP[i-width-1][i+width+1] = 1;
            width++;
        }
        
        width=1;
        while(i+width < N && V[i]==V[i+width]) {
            DP[i][i+width] = 1;
            width++;
        }
    }
    
    int T; cin>>T;
    vector<int> Ans;
    while(T--) {
        int A,B; cin>>A>>B;
        printf("%d\n",DP[A-1][B-1]);
    }
    return 0;
}
#endif
