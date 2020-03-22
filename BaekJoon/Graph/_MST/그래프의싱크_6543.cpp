//
//  그래프의싱크_6543.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 그래프의 싱크 : ✭ SCC(Strong Connected Component) Problem
//          - 스택, 순방향그래프, 역방향그래프를 이용하여 강한요소간 관계 강한 요소 여부 등을 확인 가능하다.
#if 0
#include <iostream>
#include <vector>
#include <stack>
#include <string.h>
#include <algorithm>
using namespace std;

vector<vector<int>> G, RG;
vector<int> Ans;
int n,m;
bool visit[5001];
stack<int> st;

void dfs(int node) {
    visit[node] = true;
    for(int i : G[node]) {
        if(visit[i]) continue;
        dfs(i);
    }
    st.push(node);
}

void rdfs(int node) {
    visit[node] = true;
    Ans.push_back(node);
    for(int i : RG[node]) {
        if(visit[i]) continue;
        rdfs(i);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cin>>m;
        G.clear();
        RG.clear();
        G.resize(n+1);
        RG.resize(n+1);
        Ans.clear();
        memset(visit, false, sizeof(visit));
        
        for(int i=0; i<m; i++)
        {
            int q, w;
            cin>>q>>w;
            G[q].push_back(w);
            RG[w].push_back(q);
        }
        
        for(int i=1; i<=n; i++) if(!visit[i]) dfs(i);
        memset(visit, false, sizeof(visit));
        
        while(!st.empty())
        {
            int cur = st.top();
            st.pop();
            if(visit[cur]) continue;
            int t = (int)Ans.size();
            rdfs(cur);
            bool flag = true;
            for(int i=t; i<Ans.size(); i++) {
                for(int j=0; j<G[Ans[i]].size(); j++) {
                    if(!visit[G[Ans[i]][j]]) {
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            
            if(!flag) {
                while(Ans.size() > t) {
                    Ans.pop_back();
                }
            }
        }
        
        sort(Ans.begin(), Ans.end());
        for(int i=0; i<Ans.size(); i++) {
            printf("%d",Ans[i]);
            if(i!=Ans.size()-1) printf(" ");
        }
        puts("");
    }
}
#endif
