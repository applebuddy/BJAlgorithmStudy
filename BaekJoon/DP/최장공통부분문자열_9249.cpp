//
//  최장공통부분문자열_9249.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// * PrefixArray 공부 필요
#if 0
#include <iostream>
#include <string>
using namespace std;

int DP[200001][200001]={0};
int main() {
    string S,S2; cin>>S>>S2;
    int Ans=0;
    string AnsS="";
    for(int i=1; i<=(int)S.length(); i++) {
        for(int j=1; j<=(int)S2.length(); j++) {
            if(S[i-1]==S2[j-1]) {
                DP[i][j] = DP[i-1][j-1]+1;
                if(Ans<DP[i][j]) {
                    Ans = DP[i][j];
                    AnsS = S.substr(i-Ans,Ans);
                }
            }
        }
    }
    printf("%d\n%s\n",Ans,AnsS.c_str());
    return 0;
}
#endif
