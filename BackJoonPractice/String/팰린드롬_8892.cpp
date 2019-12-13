//
//  팰린드롬_8892.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 팰린드롬 8892

#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkPelindrom(string S) {
    for(int i=0; i<S.length()/2; i++) {
        if(S[i] != S[S.length()-i-1]) return false;
    }
    return true;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        vector<string> SV(N,"");
        string Ans = "";
        for(int i=0; i<N; i++) cin>>SV[i];
        for(int i=0; i<N-1; i++) {
            for(int j=i+1; j<N; j++) {
                if(checkPelindrom(SV[i]+SV[j])) Ans = SV[i]+SV[j];
                if(checkPelindrom(SV[j] + SV[i])) Ans = SV[j]+SV[i];
                if(!Ans.empty()) break;
            }
            if(!Ans.empty()) break;
        }
        printf("%s\n",Ans.empty() ? "0" : Ans.c_str());
    }
    return 0;
}
#endif
