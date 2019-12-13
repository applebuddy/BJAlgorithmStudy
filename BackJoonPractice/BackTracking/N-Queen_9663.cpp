//
//  N-Queen_9663.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: N-Queen_9663

#if 1
#include <iostream>
#include <vector>
using namespace std;

int Ans = 0;
int nx[2] = {-1,-1};
int ny[2] = {-1,1};

bool checkQueen(int x, int y, vector<vector<int>> &board) {
    for(int i=0; i<board.size(); i++) {
        if(i!=x && board[i][y]==1) return false;
        if(i!=y && board[x][i]==1) return false;
    }
    
    for(int i=0; i<2; i++) {
        int nX = x+nx[i], nY = y+ny[i];
        while(nX<board.size() && nX>=0 && nY>=0 && nY<board.size()) {
            if(board[nX][nY]==1) return false;
            nX += nx[i];
            nY += ny[i];
        }
    }
    
    return true;
}

void DFS(int idx, vector<vector<int>> &board) {
    if(idx>=board.size()) {
        Ans++;
        return;
    }
    
    for(int i=0; i<board.size(); i++) {
        board[idx][i]=1;
        if(checkQueen(idx, i, board)) {
            DFS(idx+1, board);
        }
        board[idx][i]=0;
    }
    
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<vector<int>> board(N,vector<int>(N,0));
    DFS(0, board);
    printf("%d\n",Ans);
    return 0;
}
#endif
