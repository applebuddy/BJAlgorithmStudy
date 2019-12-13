//
//  색종이_10163.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 색종이_10163

#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> board(102,vector<int>(102,0));
vector<int> NV(101,0);

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    for(int pIdx=1; pIdx<=T; pIdx++) {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        
        for(int i=0; i<x2; i++) {
            for(int j=0; j<y2; j++) {
                if(board[x1+i][y1+j]!=0) NV[board[x1+i][y1+j]]--;
                board[x1+i][y1+j] = pIdx;
                NV[pIdx]++;
            }
        }
    }
    
    for(int i=1; i<=T; i++) printf("%d\n",NV[i]);
    return 0;
}
#endif
