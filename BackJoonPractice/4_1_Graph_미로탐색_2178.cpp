//
//  4_1_Graph_미로탐색_2178.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 30/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// ★ 기본적인 DFS, BFS의경우 맵, 맵사이즈 형태를 하나 만들어 체크를 한다.
// ★ 카운팅할지, 단순체크할지 유무등 체크...
// ☆ if문 사용한 필터링 습관 기르기.
// connected component 모든 노드에 대한 for문 탐색, 각각의 BFS결과값 비교 or 출력

#include <iostream>
#include <vector>
#include <queue>
#define endl "\n"
#define MAX 101
using namespace std;

int g[MAX][MAX];
int c[MAX][MAX];
int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};
int N,M;

void BFS(int n, int m){
    queue<pair<int,int>> q;
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    q.push(make_pair(1,1));
    c[1][1]=1;
    
    while(!q.empty()){
        int nx = q.front().first;
        int ny = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int rx = nx+tx[i];
            int ry = ny+ty[i];
            if(rx>=0 && rx<=N && ry>=0 && ry<=M){
                if(c[rx][ry]==0 && g[rx][ry]==1){
                    c[rx][ry]=c[nx][ny]+1;
                    q.push(make_pair(rx,ry));
                }
            }
        }
    }
}

int main(){

    for(int i=0; i<MAX; i++){
    memset(c[i],0,sizeof(c[i]));
    }
    
    scanf("%d %d",&N,&M);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            scanf("%1d",&g[i][j]);
        }
    }
    
    BFS(N,M);
    printf("%d\n",c[N][M]);
    return 0;
}
