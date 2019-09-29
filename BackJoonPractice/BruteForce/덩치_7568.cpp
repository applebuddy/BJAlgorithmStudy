//
//  덩치_7568.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 덩치_7568
/// MARK: 덩치 순위를 정하고 있습니다. 덩치는 몸무게와 신장이 전부 커야 더 높은 순위가 됩니다. 하나만 크면 그건 동 순위입니다. 순위를 출력하세요.

#include <iostream>
#include <vector>

using namespace std;

vector<int> weightCompare() {
    int N; cin>>N;
    vector<int> Ans(N,1);
    vector<vector<int>> comp(N,vector<int>(2,0));
    for(int i=0; i<N; i++) cin >> comp[i][0] >> comp[i][1];
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i==j) continue;
            if(comp[i][0]<comp[j][0] && comp[i][1]<comp[j][1]) Ans[i]++;
        }
    }
    return Ans;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    vector<int> Ans = weightCompare();
//    for(auto v: Ans) printf("%d ",v);
//    return 0;
//}
