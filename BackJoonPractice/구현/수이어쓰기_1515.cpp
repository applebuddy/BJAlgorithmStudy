//
//  수이어쓰기_1515.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 수이어쓰기_1515
#if 0
#include<iostream>
#include<cmath>
using namespace std;
long long k=0;
long long len=0;

int main(){
    long long N,K;
    cin>>N>>K;
    long long count = 9;
    long long len = 1;
    long long nowNum = 0;
    long long k = K;
    
    while(K > count*len) {
        nowNum += count;
        k -= count*len;
        count *=10;
        len++;
    }
    
    nowNum += (k-1) / len + 1;
    
    if(nowNum > N) printf("-1\n");
    else {
        long long temp = (k-1) % len + 1;
        string S = to_string(nowNum);
        printf("%d\n",S[temp-1]-'0');
    }
    return 0;
}
#endif
