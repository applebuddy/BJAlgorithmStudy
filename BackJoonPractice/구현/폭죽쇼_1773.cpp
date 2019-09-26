//
//  폭죽쇼_1773.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 폭죽쇼_1773

#include <iostream>
#include <vector>

using namespace std;

vector<bool> TIME(2000001,false);

void solve(const int &N, const int &M) {
    vector<int> V(N,0);
    int Ans=0;
    
    for(int i=0; i<N; i++) cin >> V[i];
    
    for(int i=0; i<N; i++) {
        for(int j=V[i]; j<=M; j+=V[i]) {
            if(TIME[j]==false) TIME[j]=true;
        }
    }
    
    for(int i=1; i<=M; i++) {
        if(TIME[i]==true) Ans++;
    }
    
    printf("%d\n",Ans);
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int N, M;
//    cin >> N >> M;
//    solve(N,M);
//    return 0;
//}
