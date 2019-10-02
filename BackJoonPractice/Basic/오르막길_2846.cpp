//
//  오르막길_2846.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 오르막길_2846

#include <iostream>
using namespace std;

void ascendingPath() {
    int N; cin>>N;
    if(N==1) {
        printf("%d\n",0); return;
    }
    int Ans=0, cnt=0, height=0;
    cin>>height;
    for(int i=1; i<N; i++) {
        int now; cin>>now;
        if(now-height>=1) {
            cnt+=(now-height);
        } else {
            Ans = Ans < cnt ? cnt : Ans;
            cnt=0;
        }
        height = now;
    }
    Ans = Ans < cnt ? cnt : Ans;
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    ascendingPath();
//    return 0;
//}
