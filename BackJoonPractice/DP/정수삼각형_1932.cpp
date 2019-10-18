//
//  정수삼각형_1932.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 정수삼각형
#if 0
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void integerTriangle() {
    int T; cin>>T;
    vector<vector<int>> V(T, vector<int>());
    for(int i=0; i<T; i++) {
        vector<int> temp(i+1,0);
        for(int j=0; j<=i; j++) cin>>temp[j];
        V[i] = temp;
    }
    
    for(int i=1; i<T; i++) {
        for(int j=0; j<=i; j++) {
            if(j==0) V[i][j] = V[i][j]+V[i-1].front();
            else if(j==V[i].size()-1) V[i][j] = V[i][j]+V[i-1].back();
            else V[i][j] = max(V[i-1][j]+V[i][j],V[i-1][j-1]+V[i][j]);
        }
    }
    
    int Ans = *max_element(V.back().begin(),V.back().end());
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    integerTriangle();
    return 0;
}
#endif
