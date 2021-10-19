//
//  도영이가만든맛있는음식_2961.cpp
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/20.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
vector<bool> chk(11, false);
vector<ll> sList;
vector<ll> bList;
ll ans=(int)2e9;
int N;

void DFS(int idx, int cnt) {
    if(cnt>0)
    {
        ll sr=1, br=0;
        for(int i=0; i<N; i++) {
            if(chk[i]) {
                sr *= sList[i];
                br += bList[i];
            }
        }
        ll diff = (ll)abs(sr-br);
        ans = ans > diff ? diff : ans;
    }
    
    for(int i=idx; i<N; i++) {
        if(chk[i]) continue;
        chk[i]=true;
        DFS(i, cnt+1);
        chk[i]=false;
    }
}

int main() {
    ios_base :: sync_with_stdio(); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) {
        int s, b; cin>>s>>b;
        sList.push_back(s);
        bList.push_back(b);
    }
    DFS(0, 0);
    printf("%lld\n", ans);
}
#endif
