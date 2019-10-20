//
//  스캐너_3035.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 스캐너_3035
#if 0
#include <iostream>
#include <vector>
using namespace std;

void theScanner() {
    int R,C,ZR,ZC; cin>>R>>C>>ZR>>ZC;
    vector<vector<char>> V(R,vector<char>(C,0));
    
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            cin>>V[i][j];
        }
    }
    
    for(int i=0; i<R; i++) {
        for(int zr=0; zr<ZR; zr++) {
            for(int j=0; j<C; j++) for(int zc=0; zc<ZC; zc++) printf("%c",V[i][j]);
            puts("");
        }
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theScanner();
    return 0;
}
#endif 
