//
//  IOIOI_5525.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: TLE 답안
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N, Ans=0; cin>>N;
    int l; cin>>l;
    string S; cin>>S;
    string comp = "";
    for(int i=0; i<N; i++) {
        comp += 'I';
        comp += 'O';
    }
    comp += 'I';
    int len = (int)comp.length();
    string comp2 = S.substr(0,len);
    int idx = 0;
    while(idx <= S.length()-len) {
        if(comp == S.substr(idx, len)) Ans++;
        idx++;
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
