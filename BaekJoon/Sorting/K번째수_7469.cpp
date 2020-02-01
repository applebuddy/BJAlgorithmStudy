//
//  K번째수_7469.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 시간초과 답안
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    while(M--) {
        int A,B,C; cin>>A>>B>>C;
        vector<int> temp = vector<int>(V.begin()+A-1, V.begin()+B);
        sort(temp.begin(), temp.end());
        printf("%d\n",temp[C-1]);
    }
    return 0;
}
#endif
