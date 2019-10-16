//
//  손익분기점_1712.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 16/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 손익분기점_1712
#if 0
#include <iostream>
using namespace std;

void theBreakEnenPoint() {
    long long A,B,C; cin>>A>>B>>C;
    long long Ans = 1;
    if(A+B < C) { printf("%lld\n",Ans); return 0; }
    if(B >= C) { printf("%d\n",-1); return 0; }
    printf("%lld\n",A/(C-B)+1);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theBreakEnenPoint();
    return 0;
}
#endif
