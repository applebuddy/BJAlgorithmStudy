//
//  4_1_Graph_토마토_7576.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 05/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#define MAX 1001
using namespace std;

int c[MAX][MAX];
int g[MAX][MAX];
int M,N,ans=0,need=0,maxValue=0;
int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};
queue<pair<int,int>> q;

void BFS(int n, int m){
    
    while(!q.empty()){
        int nx=q.front().first;
        int ny=q.front().second;
        queue<pair<int,int>> tq;
        q.pop();
        for(int i=0; i<4; i++){
            int rx=nx+tx[i];
            int ry=ny+ty[i];
            if(rx<1 || rx>N || ry<1 || ry>M) continue;
            if(c[rx][ry]!=0 || g[rx][ry]==-1) continue;
            c[rx][ry]=c[nx][ny]+1;
            need-=1; if(need<=0) break;
            q.push(make_pair(rx,ry));
        }
    }
}

int main(){
    scanf("%d %d",&M,&N);
    for(int i=0; i<MAX; i++){
        memset(c[i],0,sizeof(c[i]));
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            scanf("%d",&g[i][j]);
            if(g[i][j]==0){
                need++;
            }else if(g[i][j]==1) {
                q.push(make_pair(i,j));
                c[i][j]=1;
            }else{
                c[i][j]=-1;
            }
        }
    }
    if(need==0){
        printf("%d\n",0);
        return 0;
    }
    
    BFS(N,M);
    if(need>0) printf("%d",-1);
    else {
        for(int i=1; i<=N; i++){
            for(int j=1; j<=M; j++){
                maxValue = max(maxValue,c[i][j]);
            }
        }
        printf("%d\n",maxValue-1);
    }    
    return 0;
}
