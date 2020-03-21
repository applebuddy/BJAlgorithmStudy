//
//  judgingTroubles.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - JudgingTroubles
#if 0
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    unordered_map<string, int> UMP;
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        string n; cin>>n; UMP[n]++;
    }
    for(int i=0; i<N; i++) {
        string n; cin>>n; UMP[n]--;
    }
    
    int cnt=0;
    for(auto m: UMP) cnt+=m.second<0 ? m.second*-1 : m.second;
    printf("%d\n",N-cnt/2);
    return 0;
}
#endif
