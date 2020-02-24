//
//  소수의연속합_1644.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 소수의연속함 1644
// MARK: DFS + Math 문제풀이
#if 0
#include <iostream>
#include <vector>
#include <cmath>
#define MAX 4000001
using namespace std;

vector<int> Prime(MAX,1);
vector<int> PV;
int Ans = 0;

void checkPrime(int idx, int sum, const int &target, const vector<int> &PV) {
    if(sum > target || idx >= PV.size()) return;
    if(sum == target) {
        Ans++;
        return;
    }
    
    checkPrime(idx+1, sum + PV[idx], target, PV);
}
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    Prime[1] = 0;
    for(int i=2; i<=N; i++) {
        if(Prime[i]==1)
            for(int j=i+i; j<=N; j+=i)
                Prime[j] = 0;
    }
    
    if(Prime[N]==1) Ans++;
    for(int i=2; i<=N; i++) if(Prime[i]==1) PV.push_back(i);
    for(int i=0; i<PV.size(); i++) checkPrime(i, 0, N, PV);
    printf("%d\n",Ans);
    return 0;
}
#endif

