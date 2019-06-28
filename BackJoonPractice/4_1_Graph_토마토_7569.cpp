
//
//  4_1_Graph_토마토_7569.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 07/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <queue>
#include <tuple>
#include <string.h>
#define MAX 101
using namespace std;

int tx[] = {0,0,-1,1};
int ty[] = {-1,1,0,0};
int tz[] = {-1,1};
int need=0;

queue<tuple<int,int,int>> q;
int g[MAX][MAX][MAX];
int c[MAX][MAX][MAX];

void BFS(int z, int y, int x){
    
    while(!q.empty()){
        int nx=get<2>(q.front());
        int ny=get<1>(q.front());
        int nz=get<0>(q.front());
        q.pop();
        for(int i=0; i<4; i++){
            int mx=nx+tx[i];
            int my=ny+ty[i];
            if(mx<0 || mx>=x || my<0 || my>=y) continue;
            if(c[nz][my][mx]!=0 || g[nz][my][mx]==-1) continue;
            c[nz][my][mx]=c[nz][ny][nx]+1;
            g[nz][my][mx]=1;
            q.push(make_tuple(nz,my,mx));
            need--;
            if(need<=0) return;
        }
        for(int i=0; i<2; i++){
            int mz=nz+tz[i];
            if(mz<0 || mz>=z) continue;
            if(c[mz][ny][nx]!=0 || g[mz][ny][nx]==-1) continue;
            c[mz][ny][nx]=c[nz][ny][nx]+1;
            g[mz][ny][nx]=1;
            q.push(make_tuple(mz,ny,nx));
            need--;
            if(need<=0) return;
        }
    }
}

int main(){
    int M,N,H,maxValue=0;
    scanf("%d %d %d",&M,&N,&H);
    for(int i=0; i<H; i++){
        for(int j=0; j<N; j++){
            memset(c[i][j],0,sizeof(c[i][j]));
            for(int k=0; k<M; k++){
                scanf("%d",&g[i][j][k]);
                if(g[i][j][k]==1) {
                    c[i][j][k]=1;
                    q.push(make_tuple(i,j,k));
                }else if(g[i][j][k]==0){
                    need++;
                }else{
                    c[i][j][k]=-1;
                }
            }
        }
    }
    if(need==0) {
        printf("%d\n",0);
        return 0;
    }
    BFS(H,N,M);
    if(need!=0){
        printf("%d\n",-1);
        return 0;
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                maxValue = max(maxValue,c[i][j][k]);
            }
        }
    }
    printf("%d\n",maxValue-1);
    
    return 0;
}
