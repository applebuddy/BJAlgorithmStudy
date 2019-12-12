//
//  Quicksum_4613.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: Quicksum_4613

#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        string S;
        int Ans=0;
        getline(cin, S);
        if(S=="#") break;
        for(int i=0; i<S.length(); i++) {
            if(S[i]>='A' && S[i]<='Z') Ans += (i+1)*(S[i]-'A'+1);
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
