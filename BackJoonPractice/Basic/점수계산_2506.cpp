//
//  점수계산_2506.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 점수계산
#if 0
#include <iostream>
using namespace std;

void calculatingScore() {
    int T; cin>>T;
    int cnt=0;
    int Ans=0;
    for(int i=0; i<T; i++) {
        int n; cin>>n;
        if(n==1) {
            cnt++;
            Ans+=cnt;
        } else cnt=0;
    }
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    calculatingScore();
    return 0;
}
#endif
