//
//  악수_8394.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 악수_8394
#if 0
#include <iostream>
#include <vector>
using namespace std;

void theHandShaking() {
    int N; cin>>N;
    if(N<=3) return !printf("%d\n",N);
    int a=2, b=3, Ans=5;
    for(int i=4; i<=N; i++) {
        Ans = (a+b)%10;
        a = b;
        b = Ans;
    }
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0);
    theHandShaking();
    return 0;
}
#endif
///// MARK: - 메모리 과대 사용 통과답안
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int N; cin>>N;
//    vector<int> DP(N+1,0);
//
//    for(int i=1; i<=3; i++) DP[i]=i;
//    if(N<=3) {
//        printf("%d\n",DP[N]);
//        return 0;
//    }
//
//    for(int i=4; i<=N; i++) {
//        DP[i] = (DP[i-1]+DP[i-2])%10;
//    }
//
//    printf("%d\n",DP[N]);
//    return 0;
//}
