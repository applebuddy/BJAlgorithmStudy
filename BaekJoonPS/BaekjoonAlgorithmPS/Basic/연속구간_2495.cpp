//
//  연속구간_2495.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 연속구간_2495
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int Ans[3]={1,1,1};
    for(int i=0; i<3; i++) {
        int cnt=1;
        int N; cin>>N;
        string S = to_string(N);
        for(int j=0; j<S.length()-1; j++) {
            if(S[j]==S[j+1]) {
                cnt++;
                Ans[i] = Ans[i]<cnt ? cnt : Ans[i];
            }
            else cnt=1;
        }
    }
    
    for(int i=0; i<3; i++) {
        printf("%d\n",Ans[i]);
    }
    return 0;
}
#endif 
