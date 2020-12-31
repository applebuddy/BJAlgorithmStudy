//
//  Gaus_7523.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 08/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Gaus_7523
#if 0
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    for(int i=1; i<=T; i++) {
        long long A,B; cin>>A>>B;
        printf("Scenario #%d:\n",i);
        printf("%lld\n",((B-A-1)/2+1)*(A+B));
        puts("");
    }
    return 0;
}
#endif
