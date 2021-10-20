//
//  행운의문자열_1342.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 행운의문자열_1342

#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    int Ans=0;
    sort(S.begin(), S.end());
    bool flag = true;
    do {
        flag = true;
        for(int i=0; i<S.length()-1; i++) {
            if(S[i] == S[i+1]) {
                flag = false;
                break;
            }
        }
        
        if(flag) Ans++;
        
    }while(next_permutation(S.begin(), S.end()));
    
    printf("%d\n",Ans);
    return 0;
}
#endif
