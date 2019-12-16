//
//  전구와스위치_2138.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 전구와 스위치_2138
#if 0
#include <iostream>
#include <string>
#define INF 2100000000
using namespace std;

string S, Result;
int N, Ans=INF;

void clickLight(int idx) {
    if(idx>0) S[idx-1] = S[idx-1]=='1' ? '0' : '1';
    S[idx] = S[idx]=='1' ? '0' : '1';
    if(idx<N-1) S[idx+1] = S[idx+1]=='1' ? '0' : '1';
}

bool checkEqualLight() {
    for(int i=0; i<S.length(); i++) {
        if(S[i] != Result[i]) {
            return false;
        }
    }
    return true;
}

void checkLight(int idx, int count) {
    if(idx == N-1) {
        if(checkEqualLight()) Ans = Ans > count ? count : Ans;
        clickLight(idx);
        if(checkEqualLight()) Ans = Ans > count+1 ? count+1 : Ans;
        clickLight(idx);
        return;
    }
    
    if(S[idx-1] == Result[idx-1]) checkLight(idx+1,count);
    clickLight(idx);
    if(S[idx-1] == Result[idx-1]) checkLight(idx+1,count+1);
    clickLight(idx);
}

void lightBulbAndSwitchProblem() {
    cin>>N>>S>>Result;
    checkLight(1,0);
    clickLight(0);
    checkLight(1,1);
    printf("%d\n",Ans==INF ? -1 : Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    lightBulbAndSwitchProblem();
    return 0;
}
#endif 
