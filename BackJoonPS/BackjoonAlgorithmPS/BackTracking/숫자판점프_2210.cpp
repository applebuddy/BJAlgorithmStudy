//
//  숫자판점프_2210.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 숫자판점프_2210

// MARK: - DFS 문제풀이
#if 0
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> G(5, vector<int>(5,0));
vector<int> V;
set<vector<int>> ST;
int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};

void DFS(int x, int y) {
    if(V.size() > 6) return;
    if(V.size() == 6) {
        ST.insert(V);
        return;
    }
    
    for(int i=0; i<4; i++) {
        int nx = x + tx[i];
        int ny = y + ty[i];
        if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;
        V.push_back(G[nx][ny]);
        DFS(nx, ny);
        V.pop_back();
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> G[i][j];
        }
    }
    
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            V = {G[i][j]};
            DFS(i,j);
        }
    }
    
    printf("%d\n",(int)ST.size());
    return 0;
}
#endif
