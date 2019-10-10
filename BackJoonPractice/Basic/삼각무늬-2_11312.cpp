//
//  삼각무늬-2_11312.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Triangle Pattern

#include <iostream>
#include <cmath>
using namespace std;

void theTrianglePattern() {
    int T; cin>>T;
    while(T--) {
        long long a,b; cin>>a>>b;
        long long A=a*a;
        long long B=b*b;
        printf("%lld\n",A%B==0 ? A/B : A/B+1);
    }
    return;
}

//int main() {
//    theTrianglePattern();
//    return 0;
//}
