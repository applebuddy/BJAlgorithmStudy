//
//  LCS3_1958.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string getLCS(string S, string S2) {
    int len = (int)S.length(), len2 = (int)S2.length();
    vector<vector<int>> DP(len+1, vector<int>(len2+1, 0));
    vector<vector<string>> DP2(len+1, vector<string>(len2+1, ""));
    for(int i=1; i<=len; i++) {
        for(int j=1; j<=len2; j++) {
            if(S[i-1] == S2[j-1]) {
                DP[i][j] = DP[i-1][j-1] + 1;
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
    return DP2[len][len2];
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<string> SV(3,"");
    int Ans = 0;
    for(int i=0; i<3; i++) cin>>SV[i];
    
    vector<int> perm = {0,1,2};
    do {
        string S = getLCS(SV[perm[0]],SV[perm[1]]);
        int comp = (int)(getLCS(S, SV[perm[2]]).length());
        Ans = Ans < comp ? comp : Ans;
        
    } while(next_permutation(perm.begin(), perm.end()));

    printf("%d\n",Ans);
    return 0;
}
#endif
