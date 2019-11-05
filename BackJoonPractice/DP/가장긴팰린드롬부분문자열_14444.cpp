//
//  가장긴팰린드롬부분문자열_14444.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가장 긴 팰린드롬부분문자열_14444
#if 0
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int manachersAlgorithm(string S) {
    int r=0, p=0, Ans=0;
    vector<int> A(S.length(),0);
    for(int i=0; i<S.length(); i++) {
        if(i<=r) A[i] = min(A[2*p-i],r-i);
        else A[i] = 0;
        while(i-A[i]-1>=0 && i+A[i]+1<S.length() && S[i-A[i]-1]==S[i+A[i]+1]) {
            A[i]++;
        }
        
        if(r < A[i]+i) {
            Ans = Ans<A[i] ? A[i] : Ans;
            r = A[i] + i;
            p = i;
        }
    }
    return Ans;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    string CS = "@";
    for(int i=0; i<S.length(); i++) {
        CS += S[i];
        CS += "@";
    }
    
    int Ans = manachersAlgorithm(CS);
    printf("%d\n",Ans);
    return 0;
}
#endif
