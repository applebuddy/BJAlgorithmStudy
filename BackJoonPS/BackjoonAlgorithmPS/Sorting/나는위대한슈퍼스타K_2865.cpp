//
//  나는위대한슈퍼스타K.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 나는 위대한 슈퍼스타K_2865
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void imGreatSuperStarK() {
    int N,M,K; cin>>N>>M>>K;
    double Ans=0;
    vector<double> SV(N,0.0);
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            int num;
            double score;
            cin>>num>>score;
            SV[num-1] = SV[num-1]<score ? score : SV[num-1];
        }
    }
    sort(SV.begin(), SV.end(), greater<double>());
    for(int i=0; i<K; i++) Ans+=SV[i];
    printf("%.1lf\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    imGreatSuperStarK();
//    return 0;
//}

