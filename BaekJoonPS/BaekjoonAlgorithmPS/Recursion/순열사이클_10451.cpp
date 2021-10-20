//
//  순열사이클_10451.cpp
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/15.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int ans = 0;
vector<bool> chk(1001, false);
vector<int> G;

void checkPerm(int idx, int &n) {
    if(chk[G[idx]]) {
        ans++;
        return;
    }
    chk[G[idx]] = true;
    checkPerm(G[idx], n);
}

int boj10451() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        G = {0};
        for(int i=0; i<n; i++) {
            int num; cin>>num;
            G.push_back(num);
        }
        ans = 0;
        chk = vector<bool>(1001, false);
        for(int i=1; i<=n; i++) {
            if(chk[i]) continue;
            chk[i] = true;
            checkPerm(i, n);
        }
        
        printf("%d\n", ans);
    }
}
#endif
