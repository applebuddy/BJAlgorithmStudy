//
//  초6수학_2702.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 초6수학_2702
#if 0
#include <iostream>
using namespace std;

int getGCD(int A, int B) {
    if(B==0) return A;
    return getGCD(B,A%B);
}

int getLCD(const int &A, const int &B) {
    return A*B/getGCD(A,B);
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int a,b; cin>>a>>b;
        printf("%d %d\n",getLCD(a, b), getGCD(a, b));
    }
    return 0;
}
#endif
