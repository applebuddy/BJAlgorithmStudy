//
//  수들의합2_2003.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/11/24.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 수들의합2_2003
#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<long long> V(10001,0);
    int Ans=0;
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        if(i==0) V[i]=num;
        else V[i]=V[i-1]+num;
        if(num==M) Ans++;
    }
    
    for(int i=0; i<V.size()-1; i++) {
        for(int j=i+1; j<V.size(); j++) {
            long long segmentSum = V[j]-(i==0 ? 0 : V[i-1]);
            if(segmentSum == M) Ans++;
            else if(segmentSum > M) break;
        }
    }
    
    printf("%d\n",Ans);
}
#endif
