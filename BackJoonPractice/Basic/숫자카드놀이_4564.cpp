//
//  숫자카드놀이_4564.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
#if 0
/// MARK: - 숫자카드놀이_4564
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        int N; cin>>N;
        if(N==0) break;
        while(1) {
            int newN=1, cnt=0;
            printf("%d",N);
            while(N>0) {
                cnt++;
                newN*=N%10;
                N/=10;
            }
            if(cnt<=1) break;
            else printf(" ");
            N=newN;
        }
        puts("");
    }
    return 0;
}
#endif
