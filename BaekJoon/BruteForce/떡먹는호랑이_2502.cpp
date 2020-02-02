//
//  떡먹는호랑이_2502.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 떡먹는호랑이 2502

// MARK: - BruteForce 문제풀이
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int D,K; cin>>D>>K;
    for(int i=1; i<K-1; i++) {
        for(int j=i+1; j<K; j++) {
            int prevSum = j;
            int nowSum = i+j;
            if(nowSum==K && D==3) return !printf("%d\n%d\n",i,j);
            for(int t=4; t<=D; t++) {
                if(nowSum+prevSum==K && D==t) return !printf("%d\n%d\n",i,j);
                int temp = nowSum;
                nowSum = nowSum + prevSum;
                prevSum = temp;
                if(nowSum > K) break;
            }
        }
    }
    return 0;
}
