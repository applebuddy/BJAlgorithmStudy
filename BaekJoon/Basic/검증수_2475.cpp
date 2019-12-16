//
//  검증수_2475.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 검증수_2475
#if 0
#include <iostream>
using namespace std;

void theVerificationNumber() {
    int sum=0;
    for(int i=0; i<5; i++) {
        int num; cin>>num;
        sum += num*num;
    }
    
    printf("%d\n",sum%10);
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theVerificationNumber();
    return 0;
}
#endif
