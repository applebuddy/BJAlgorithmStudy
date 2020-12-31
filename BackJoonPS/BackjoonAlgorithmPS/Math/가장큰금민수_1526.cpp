//
//  가장큰금민수_1526.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 가장큰금민수_1526

#if 0
#include <iostream>
#include <vector>
using namespace std;

bool isGminsoo(int N) {
    while(N>0) {
        if(N%10!=7 && N%10!=4) return false;
        N/=10;
    }
    return true;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    for(int i=N; i>=4; i--) {
        if(isGminsoo(i)) return !printf("%d\n",i);
    }
    return 0;
}
#endif
