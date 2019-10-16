//
//  배수와약수.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 16/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 배수와 약수_5086
#if 0
#include <iostream>
using namespace std;

void multipleAndFactor() {
    while(1) {
        int A,B; cin>>A>>B;
        if(A==0 && B==0) break;
        if(A==0 || B==0 || (A%B!=0 && B%A!=0)) printf("neither\n");
        else if(A%B==0) printf("multiple\n");
        else if(B%A==0) printf("factor\n");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    multipleAndFactor();
    return 0;
}
#endif
