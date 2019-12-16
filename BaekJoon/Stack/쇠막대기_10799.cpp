//
//  쇠막대기_10799.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 쇠막대기_10799
#if 0
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void theIronStick() {
    string S; cin>>S;
    stack<char> STK;
    bool flag = false;
    int Ans = 0;
    for(int i=0; i<S.length(); i++) {
        if(S[i]=='(') { STK.push('('); flag=false; }
        else {
            STK.pop();
            if(flag==false) {
                Ans += (int)STK.size();
                flag = true;
            } else Ans++;
            
        }
    }
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theIronStick();
    return 0;
}
#endif 
