//
//  삼각무늬-1_11320.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 삼각무늬-1_11320
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int A,B; cin>>A>>B;
        int Ans = (A*A)/(B*B);
        if(A%B!=0) Ans++;
        printf("%d\n",Ans);
    }
    
    return 0;
}
#endif
