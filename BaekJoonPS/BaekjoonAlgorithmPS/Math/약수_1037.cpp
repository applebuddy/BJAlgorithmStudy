//
//  약수_1037.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 약수_1037
//  - 어떤 수, N이 갖고 있는 1, N을 제외한 진짜 약수의 갯수와 약수 값이 주어질때 해당 약수만을 갖는 N을 구하라!!

//  * 약수가 1개면 소수이므로 약수의 N은 유일한 약수, K의 제곱이다.
//  * 약수가 2개 이상이면, 해당 약수의 최솟값*최댓값이 N이다.
#include <iostream>
#include <cmath>
using namespace std;

void getRealMeasure() {
    int N; cin>>N;
    long long MAX=0, MIN=2100000000;
    for(int i=0; i<N; i++) {
        int n; cin>>n;
        MAX = MAX<n ? n : MAX;
        MIN = MIN>n ? n : MIN;
    }
    if(N==1) printf("%lld\n",MAX*MAX);
    else printf("%lld\n",MAX*MIN);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    getRealMeasure();
//    return 0;
//}
