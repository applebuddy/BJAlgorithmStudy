//
//  알파벳_1987.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 알파벳_1987 백트렉킹 문제풀이
#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int tx[] = {0,0,1,-1};
int ty[] = {1,-1,0,0};
int Ans = 1;
int N, M;

vector<string> SV(21, string(21,' '));
vector<int> C(26,0);

void DFS(int x, int y, int depth) {
    
    for(int i=0; i<4; i++) {
        int nx = x + tx[i];
        int ny = y + ty[i];
        if(nx<0 || ny<0 || nx>=N || ny>=M) continue;
        if(C[SV[nx][ny]-'A']>0) continue;
        C[SV[nx][ny]-'A'] = 1;
        depth += 1;
        Ans = depth > Ans ? depth : Ans;
        DFS(nx, ny, depth);
        C[SV[nx][ny]-'A'] = 0;
        depth -= 1;
        
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string S; cin>>S;
        SV[i] = S;
    }
    
    C[SV[0][0]-'A']=1;
    DFS(0,0,1);
    
    printf("%d\n",Ans);
    return 0;
}
#endif
