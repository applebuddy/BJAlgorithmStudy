//
//  피시방알바_1453.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 피시방알바_1453

#include <iostream>
#include <map>
using namespace std;

void thePersonalComputerRoomArbeit() {
    map<int,int> MP;
    int Ans=0;
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        MP[N]++;
    }
    for(auto m : MP) if(m.second>1) Ans+=m.second-1;
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    thePersonalComputerRoomArbeit();
    return 0;
}
