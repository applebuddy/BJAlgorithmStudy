//
//  꼬인전깃줄_1365.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 꼬인전깃줄 1365
// MARK: LIS C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> V(100001,0);
vector<int> Ans;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=0; i<N; i++) {
        int idx = (int)(lower_bound(Ans.begin(), Ans.end(), V[i]) - Ans.begin());
        if(idx == (int)Ans.size()) Ans.push_back(V[i]);
        else Ans[idx] = V[i];
    }
    
    int max = (int)Ans.size();
    printf("%d\n",N-max);
    return 0;
}
#endif
