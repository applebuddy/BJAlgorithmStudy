//
//  LCS2_9251.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - LCS2 9252
// MARK: LCS DP 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S,S2; cin>>S>>S2;
    int len = (int)S.length(), len2 = (int)S2.length();
    vector<vector<int>> DP(len+1, vector<int>(len2+1, 0));
    vector<vector<string>> DP2(len+1, vector<string>(len2+1, ""));
    for(int i=1; i<=len; i++) {
        for(int j=1; j<=len2; j++) {
            if(S[i-1]==S2[j-1]) {
                DP[i][j] = DP[i-1][j-1]+1;
                DP2[i][j] = DP2[i-1][j-1] + S[i-1];
            } else {
                if(DP[i-1][j] > DP[i][j-1]) {
                    DP[i][j] = DP[i-1][j];
                    DP2[i][j] = DP2[i-1][j];
                } else {
                    DP[i][j] = DP[i][j-1];
                    DP2[i][j] = DP2[i][j-1];
                }
            }
        }
    }
    
    printf("%d\n%s\n",DP[len][len2],DP2[len][len2].c_str());
    return 0;
}
#endif
