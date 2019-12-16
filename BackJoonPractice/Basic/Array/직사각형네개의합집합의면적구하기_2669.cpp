//
//  직사각형네개의합집합의면적구하기_2669.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 직사각형 네개의 합집합의 면적 구하기 2669

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<vector<int>> V(101,vector<int>(101,0));
    int Ans = 0;
    for(int i=0; i<4; i++) {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        for(int x=x1; x<x2; x++) {
            for(int y=y1; y<y2; y++) {
                if(V[x][y]==0) {
                    V[x][y]=1;
                    Ans++;
                }
            }
        }
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
