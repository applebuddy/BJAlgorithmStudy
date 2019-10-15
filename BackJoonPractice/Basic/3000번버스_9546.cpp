//
//  3000번버스_9546.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 15/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 3000번 버스_9546
#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<int> NV(31,0);

long long pw(int n, int r) {
    long long Ans = 1;
    int num = n;
    while(r>0) {
        if(r%2==1) {
            Ans*=num;
            r--;
        }
        else {
            num*=num;
            r/=2;
        }
    }
    return Ans;
}

int getNumber(int N) {
    if(NV[N]>0) return NV[N];
    if(N==1) return NV[N] = 1;
    NV[N] = getNumber(N-1)+(int)pw(2,N-1);
    return NV[N];
}

void the3000Bus() {
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        int Ans = getNumber(N);
        printf("%d\n",Ans);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    the3000Bus();
    return 0;
}
#endif 
