//
//  이항계수3_11401.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 이항계수 구하기 : 메모리 문제 해결 x
#include <vector>
#include <iostream>
using namespace std;

int CE[4000001][4000001];
long long getEHKS(int n, int r) {
    if(CE[n][r]>0) return CE[n][r];
    if(n==r || r==0) return CE[n][r]=1;
    return CE[n][r] = getEHKS(n-1,r-1)%1000000007+getEHKS(n-1,r)%1000000007;
}

//int main() {
//    int N,R; cin>>N>>R;
//    printf("%lld\n",getEHKS(N, R));
//    return 0;
//}
