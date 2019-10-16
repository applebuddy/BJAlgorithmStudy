//
//  이항계수1_11050.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 16/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 이항계수1
#if 0
#include <iostream>
#include <vector>
using namespace std;

int getBinomialCoefficient(int N, int R, vector<vector<int>> &CV) {
    if(CV[N][R]>0) return CV[N][R];
    if(R==0 || N==R) return 1;
    return CV[N][R] = getBinomialCoefficient(N-1, R-1, CV) + getBinomialCoefficient(N-1, R, CV);
}

void theBinomialCoefficient() {
    int N,R; cin>>N>>R;
    vector<vector<int>> BCV(N+1,vector<int>(N+1));
    int Ans = getBinomialCoefficient(N, R, BCV);
    printf("%d\n",Ans);
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theBinomialCoefficient();
    return 0;
}
#endif
