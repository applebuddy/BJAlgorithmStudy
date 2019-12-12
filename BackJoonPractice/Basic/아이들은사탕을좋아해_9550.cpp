//
//  아이들은사탕을좋아해_9550.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 아이들은 사탕을 좋아해 9550
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N,K; cin>>N>>K;
        int Ans=0;
        for(int i=0; i<N; i++) {
            int num; cin>>num;
            Ans += num/K;
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
