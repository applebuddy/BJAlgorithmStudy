//
//  합이0인네정수_7453.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: DFS시도, TLE 답안

#if 0
#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;
vector<vector<ll>> G(4001, vector<ll>(4,0));
ll len=0;

string temp="";
set<string> ST;
void DFS(ll idx, ll sum) {
    if(idx >= 4) {
        if(sum==0) {
            ST.insert(temp);
        }
        return;
    }
    
    for(int i=0; i<len; i++) {
        temp += to_string(G[i][idx]);
        DFS(idx+1, sum+G[i][idx]);
        temp.pop_back();
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    len = N;
    for(int i=0; i<N; i++)
        for(int j=0; j<4; j++) {
            cin>>G[i][j];
        }
    
    DFS(0, 0);

    printf("%d\n",(int)ST.size());
    return 0;
}
#endif
