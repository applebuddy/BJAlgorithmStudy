//
//  유레카이론_10448.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 유레카이론_!0448

#include <iostream>
#include <vector>
using namespace std;

vector<int> UKA;

int checkUreka() {
    int N; cin>>N;
    for(int i=0; i<UKA.size(); i++) {
        if(UKA[i]>=N) break;
        for(int j=0; j<UKA.size(); j++) {
            if(UKA[i]+UKA[j]>=N) break;
            for(int k=0; k<UKA.size(); k++) {
                if(UKA[i]+UKA[j]+UKA[k]>N) break;
                if(N == UKA[i]+UKA[j]+UKA[k]) return 1;
            }
        }
    }
    return 0;
}

void urekaTheory() {
    for(int i=2; i<=45; i++) UKA.push_back(i*(i-1)/2);
    int T; cin>>T;
    while(T--) {
        int Ans = checkUreka();
        printf("%d\n",Ans);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    urekaTheory();
//    return 0;
//}
