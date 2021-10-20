//
//  등장하지않는문자의합_3059.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 등장하지않는문자의합_3059
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--) {
        int C[26] = {0,};
        int Ans=0;
        string S; cin>>S;
        for(int i=0; i<S.length(); i++) C[S[i]-'A']++;
        for(int i=0; i<26; i++) {
            if(C[i]==0) Ans+=(i+65);
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
