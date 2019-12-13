//
//  명령프롬프트_1032.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 명령 프롬프트 1032

#if 0
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    string S,S2,Ans=""; cin>>S;
    vector<bool> C((int)S.length(),true);
    N--;
    while(N--) {
        cin>>S2;
        for(int i=0; i<S2.length(); i++) {
            if(!C[i]) continue;
            if(S[i]!=S2[i]) C[i]=false;
        }
        S = S2;
    }
    
    for(int i=0; i<C.size(); i++) {
        if(C[i]) Ans+=S[i];
        else Ans+="?";
    }
    
    printf("%s\n",Ans.c_str());
    return 0;
}
#endif
