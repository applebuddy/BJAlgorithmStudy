//
//  순열의순서_1722.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 순열의순서_1722
#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<long long> FAC(21,0);

vector<int> getSequenceByOrder(int N, long long K) {
    vector<int> SV(N,0);
    vector<int> Ans;
    for(int i=1; i<=N; i++) SV[i-1]=i;
    K--;
    while(SV.size()!=0) {
        int len = (int)SV.size();
        long long temp = K/(FAC[len-1]);
        Ans.push_back(SV[temp]);
        SV.erase(SV.begin()+temp,SV.begin()+temp+1);
        K = K%(FAC[len-1]);
    }
    return Ans;
}

long long getSequenceOrder(int N, vector<int> Result) {
    long long K=1;
    vector<bool> C(N,true);
    for(int i=0; i<(int)Result.size(); i++) {
        for(int j=1; j<Result[i]; j++) {
            if(C[j]) K += FAC[N-i-1];
        }
        C[Result[i]] = false;
    }
    return K;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    
    FAC[0] = 1;
    FAC[1] = 1;
    for(int i=2; i<21; i++) {
        FAC[i] = FAC[i-1]*i;
    }
    
    int N; cin>>N;
    int C; cin>>C;
    if(C==1) {
        long long K; cin>>K;
        vector<int> Ans = getSequenceByOrder(N,K);
        for(int i=0; i<Ans.size(); i++) {
            printf("%d",Ans[i]);
            if(i!=Ans.size()-1) printf(" ");
        }
        puts("");
    }
    else {
        vector<int> Result(N,0);
        for(int i=0; i<N; i++) cin>>Result[i];
        long long Ans = getSequenceOrder(N, Result);
        printf("%lld\n",Ans);
    }
    
    return 0;
}
#endif
