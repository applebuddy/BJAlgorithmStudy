//
//  소인수분해_11653.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 16/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 소인수분해_11653
#if 0
#include <iostream>
#include <vector>
using namespace std;

/// MARK: - 에라토스테네스체 미사용, 간결 답안)
void thePrimeFactorization2() {
    int N; cin>>N;
    
    int idx=2;
    while(N!=1) {
        int temp = N%idx;
        if(temp==0) {
            printf("%d\n",idx);
            N/=idx;
        }
        else idx++;
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    thePrimeFactorization2();
    return 0;
}
#endif


/// MARK: 에라토스테네스 체 사용 통과 답안)
#if 0
#include <iostream>
#include <vector>
using namespace std;

void thePrimeFactorization() {
    int N; cin>>N;
    vector<int> PV(N+1,1);
    vector<int> PRIME;
    vector<int> Ans;
    for(int i=2; i*i<=N; i++) {
        for(int j=i+i; j<=N; j+=i) {
            PV[j]=0;
        }
    }
    
    for(int i=2; i<=N; i++) {
        if(PV[i]==1) PRIME.push_back(i);
    }
    
    int idx=0;
    while(idx < PRIME.size()) {
        while(N%PRIME[idx]==0) {
            N/=PRIME[idx];
            Ans.push_back(PRIME[idx]);
            
        }
        if(N==1) break;
        else idx++;
    }
    
    for(auto v: Ans) printf("%d\n",v);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    thePrimeFactorization();
    return 0;
}
#endif
