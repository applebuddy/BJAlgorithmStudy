//
//  ABCDE_13023_Review.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 24/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
vector<int> g[2001];
vector<bool> visit(2001,false);
int N,M,ans=0;


void getCount(int node, int count){
    if(count==5){
        ans=1;
        return;
    }
    
    visit[node]=true;
    for(int i=0; i<g[node].size(); i++){
        int nextFriend = g[node][i];
        if(visit[nextFriend]==true) continue; // 이미 방문했으면 스킵한다.
        getCount(nextFriend,count+1);
    }
    visit[node]=false;
}

void drawGraph(){
    cin >> N >> M;
    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    drawGraph();
    for(int i=0; i<N; i++){
        getCount(i,1);
        if(ans==1) break;
    }
    
    cout << ans << endl;
    return 0;
}
