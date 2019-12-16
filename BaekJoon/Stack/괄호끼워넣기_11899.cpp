//
//  괄호끼워넣기_11899.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 괄호끼워넣기_11899

#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int Ans=0, sCnt=0;
    string S; cin>>S;
    for(int i=0; i<S.length(); i++) {
        if(S[i]=='(') sCnt++;
        else {
            if(sCnt==0) Ans++;
            else sCnt--;
        }
    }
    
    printf("%d\n",Ans+sCnt);
    return 0;
}
#endif
