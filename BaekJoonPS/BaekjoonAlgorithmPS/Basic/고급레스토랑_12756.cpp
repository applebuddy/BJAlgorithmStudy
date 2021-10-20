//
//  고급레스토랑_12756.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 고급레스토랑 12756

#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int,int> Pair;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<Pair> PV(2,{0,0});
    cin>>PV[0].first>>PV[0].second>>PV[1].first>>PV[1].second;
    int Acnt = (PV[0].second-1)/PV[1].first+1;
    int Bcnt = (PV[1].second-1)/PV[0].first+1;
    if(Acnt == Bcnt) printf("DRAW\n");
    else printf("%s\n",Acnt > Bcnt ? "PLAYER A" : "PLAYER B");
    return 0;
}
#endif
