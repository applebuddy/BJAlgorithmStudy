//
//  4_1_Graph_단지번호붙이기_2667.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 25/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
#include <vector>
#define MAX 26
#define endl "\n"
using namespace std;

int a[MAX][MAX];
int ans[26*26];
vector<vector<int>> g(26,vector<int>(26,0));

int mx[] = {-1,1,0,0};
int my[] = {0,0,-1,1};
int N;

/// MARK:- DFS
void DFS(int x, int y, int count){
    
    int nx=x;
    int ny=y;
    g[nx][ny]=count;
    
    for(int i=0; i<4; i++){
        nx = x+mx[i];
        ny = y+my[i];
        if(nx>=0 && nx<N && ny>=0 && ny<N){
        int next = g[nx][ny];
            if(next==0 && a[nx][ny]==1){
                DFS(nx,ny,count);
            }
        }
    }
}

void BFS(int x, int y, int count){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    g[x][y]=count;
    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx=x+mx[i];
            int ny=y+my[i];
            if(nx>=0 && nx<N && ny>=0 && ny<N){
                if(g[nx][ny]==0 && a[nx][ny]==1){
                    q.push(make_pair(nx,ny));
                    g[nx][ny]=count;
                }
            }
        }
    }
}

int main(){
    
    for(int i=0; i<MAX; i++){
        memset(a[i],0,sizeof(a[i]));
    }
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%1d",&a[i][j]);
        }
    }
    
    int count=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(a[i][j]==1 && g[i][j]==0){
                BFS(i,j,++count);
            }
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(g[i][j]>0){
                int index = g[i][j];
                ans[index]++;
            }
        }
    }
    
    sort(ans+1,ans+count+1);
    cout << count << endl;
    for(int i=1; i<=count; i++){
        cout << ans[i] << endl;
    }

    return 0;
}
