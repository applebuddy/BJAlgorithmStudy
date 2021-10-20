//
//  좋은단어_3986.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 좋은단어_3986
#if 0
#include <iostream>
#include <stack>
using namespace std;

void theFineWords() {
    int T; cin>>T;
    int Ans=0;
    for(int i=0; i<T; i++) {
        stack<char> STK;
        string S; cin>>S;
        for(int i=0; i<S.length(); i++) {
            if(STK.empty()) STK.push(S[i]);
            else {
                if(STK.top() == S[i]) STK.pop();
                else STK.push(S[i]);
            }
        }
        if(STK.empty()) Ans++;
    }
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theFineWords();
    return 0;
}
#endif
