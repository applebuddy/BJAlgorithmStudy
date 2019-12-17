//
//  수이어쓰기2_1790.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 수이어쓰기2_1790

#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    long long N, K; cin>>N>>K;
    long long k = K;
    long long len=1, cnt=9, nowNum=0;
    while(K > len*cnt) {
        k -= len*cnt;
        nowNum += cnt;
        len++;
        cnt*=10;
    }
    
    nowNum += (k-1)/len + 1;
    if(nowNum > N) return !printf("-1\n");
    printf("%d\n",to_string(nowNum)[(k-1)%len]-'0');
    
    return 0;
}
#endif
