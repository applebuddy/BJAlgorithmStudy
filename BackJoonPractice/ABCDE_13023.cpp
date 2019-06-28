//
//  ABCDE_13023.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 21/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
#define MAX 2001
int N,M;
vector<int> g[MAX];
vector<int> visit(MAX,false);
bool answer = false;

void drawGraph(){
    
    scanf("%d %d",&M,&N);
    for(int i=0; i<N; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
}

void DFS(int index, int count){
    if(count==5){
        answer=true;
        return;
    }
    visit[index]=true;
        for(int i=0; i<g[index].size(); i++){
            int nextFriend = g[index][i];
            if(visit[nextFriend]==true) continue;
            DFS(nextFriend,count+1);
            if(answer==true) break;
    }
    visit[index]=false;
}

int main(){
    
    drawGraph();
    for(int i=0; i<N; i++){
        DFS(i,1);
        if(answer==true) break;
    }
    if(answer==true) cout << 1 << endl;
    else  cout << 0 << endl;
    
    return 0;
}
