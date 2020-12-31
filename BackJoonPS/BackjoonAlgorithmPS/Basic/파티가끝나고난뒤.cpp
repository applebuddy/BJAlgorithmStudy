//
//  파티가끝나고난뒤.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 파티가 끝나고 난 뒤 : Basic Problem
#if 0
#include <iostream>
#include <vector>
using namespace std;

void afterThePartyIsOver() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int L,P; cin >>L>>P;
    int realNum = L*P;
    vector<int> Ans;
    for(int i=0; i<5; i++) {
        int N; cin>>N;
        Ans.push_back(N-realNum);
    }
    for(auto v : Ans) printf("%d ",v);
    return;
}
#endif 
//int main() {
//    afterThePartyIsOver();
//    return 0;
//}
