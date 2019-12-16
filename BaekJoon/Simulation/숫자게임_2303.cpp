//
//  숫자게임_2303.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 숫자게임_2303

#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int Ans = 0, nowMax = 0, T; cin>>T;
    for(int i=1; i<=T; i++) {
        vector<int> V(5,0);
        for(int i=0; i<5; i++) cin>>V[i];
        string S = "00111";
        do {
            int temp=0;
            for(int i=0; i<5; i++) if(S[i]=='1') temp+=V[i];
            if(nowMax <= temp%10) {
                nowMax = temp%10;
                Ans = i;
            }
        }while(next_permutation(S.begin(), S.end()));
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
