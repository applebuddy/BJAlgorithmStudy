//
//  쿠폰_10179.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 쿠폰_10179
#if 0
#include <iostream>
#include <cmath>
using namespace std;

void theCoupon() {
    int T; cin>>T;
    while(T--) {
        double A; cin>>A;
        A = round((A*0.8)*100)/100;
        printf("$%.2lf\n",A);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theCoupon();
    return 0;
}
#endif
