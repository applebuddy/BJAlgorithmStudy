//
//  4_1_Graph_섬의개수_4963.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 25/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#define endl "\n"
#define MAX 51
using namespace std;

int g[MAX][MAX];
int c[MAX][MAX];
int H,W,fuck=0,answer=0;
int mx[] = {0,0,1,-1,1,1,-1,-1};
int my[] = {1,-1,0,0,1,-1,1,-1};

void BFS(int x, int y, int count){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    
    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int i=0; i<8; i++){
            int nx=x+mx[i];
            int ny=y+my[i];
            if(nx>=0 && nx<H && ny>=0 && ny<W){
                if(g[nx][ny]==1 && c[nx][ny]==0){
                    q.push(make_pair(nx,ny));
                    c[nx][ny]=count;
                }
            }
        }
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(1){
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        cin >> W >> H;
        answer=0;
        
        for(int i=0; i<MAX; i++){
        memset(c[i],0,sizeof(c[i]));
        }
        
        for(int i=0; i<MAX; i++){
        memset(g[i],0,sizeof(g[i]));
        }
        
        
        if(H==0 && W==0) return 0;
        
        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                cin >> g[i][j];
            }
        }
        
        for(int i=0; i<H; i++){
            for(int j=0; j<W; j++){
                if(c[i][j]==0 && g[i][j]==1){
                BFS(i,j,++fuck);
                answer++;
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}
