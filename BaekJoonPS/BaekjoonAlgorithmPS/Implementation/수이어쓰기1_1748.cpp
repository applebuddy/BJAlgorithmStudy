//
//  수이어쓰기1_1748.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 수이어쓰기1_1748

#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int nCount = 9, kCount = 1;
    int N; cin>>N;
    int K = 0;
    while(1) {
        if(nCount >= N) break;
        N -= nCount;
        K += nCount*kCount;
        nCount *= 10;
        kCount++;
    }
    
    printf("%d\n",K+N*kCount);
    return 0;
}
#endif
