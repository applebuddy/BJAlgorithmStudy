//
//  RGB거리.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - RGB거리

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void distanceOfRGB() {
    int N; cin>>N;
    vector<vector<int>> V(N,vector<int>(3,0));
    for(int i=0; i<N; i++) cin>>V[i][0]>>V[i][1]>>V[i][2];
    for(int i=1; i<N; i++) {
        V[i][0] = min(V[i-1][1]+V[i][0],V[i-1][2]+V[i][0]);
        V[i][1] = min(V[i-1][0]+V[i][1],V[i-1][2]+V[i][1]);
        V[i][2] = min(V[i-1][0]+V[i][2],V[i-1][1]+V[i][2]);
    }
    int Ans = *min_element(V[N-1].begin(), V[N-1].end());
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    distanceOfRGB();
    return 0;
}
#endif
