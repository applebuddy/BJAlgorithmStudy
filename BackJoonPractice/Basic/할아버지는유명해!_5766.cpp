//
//  할아버지는유명해!_5766.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 할아버지는 유명해!_5766 : Basic Algorithm Problem

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

typedef pair<int,int> Pair;
void grandFatherIsFamous() {
    while(1) {
        unordered_map<int,int> UMP;
        int a,b; cin>>a>>b;
        if(a==0 && b==0) break;
        for(int i=0; i<a*b; i++) {
            int n; cin>>n;
            UMP[n]++;
        }
        
        vector<Pair> AV;
        for(auto m : UMP) AV.push_back(make_pair(m.first,m.second));
        sort(AV.begin(), AV.end(), [](const Pair &a, const Pair &b) {
            if(a.second == b.second) return a.first < b.first;
            else return a.second > b.second;
        });

        int secondValue = AV[1].second;
        for(int i=1; i<AV.size(); i++) {
            if(AV[i].second==secondValue) printf("%d ",AV[i].first);
        }
        printf("\n");
    }
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    grandFatherIsFamous();
//    return 0;
//}
