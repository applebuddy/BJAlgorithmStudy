//
//  신기한소수_2023.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 신기한소수_2023

// MARK: - DFS 문제풀이
#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int first[] = {2,3,5,7};

bool isPrime(int N) {
    if(N < 2) return false;
    for(int i=2; i*i<=N; i++) {
        if(N%i == 0) return false;
    }
    return true;
}

void checkWierdPrime(int N, int cnt) {
    if(cnt == 0) {
        printf("%d\n", N);
        return;
    }
    
    for(int i=1; i<=9; i+=2) {
        int now = N*10 + i;
        if(isPrime(now)) {
            checkWierdPrime(now, cnt-1);
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    
    for(int i=0; i<4; i++) {
        checkWierdPrime(first[i], N-1);
    }
    return 0;
}
#endif
