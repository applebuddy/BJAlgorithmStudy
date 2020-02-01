//
//  전깃줄_2565.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 전깃줄_2565

// MARK: - LIS 문제풀이
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> Pair;

int main() {
    int N; cin>>N;
    vector<Pair> V(N,{0,0});
    vector<int> L(N,0);
    vector<int> Ans;
    for(int i=0; i<N; i++) {
        int A,B; cin>>A>>B;
        V[i] = {A,B};
    }
    
    sort(V.begin(), V.end(), [](Pair &a, Pair &b) {
        return a.first < b.first;
    });
    
    for(int i=0; i<V.size(); i++) {
        auto idx = lower_bound(Ans.begin(), Ans.end(), V[i].second) - Ans.begin();
        if(idx == (int)Ans.size()) {
            Ans.push_back(V[i].second);
            L[i] = (int)Ans.size();
        } else {
            Ans[idx] = V[i].second;
            L[i] = (int)idx+1;
        }
    }
    
    int max = *max_element(L.begin(), L.end());
    printf("%d\n",N-max);
    return 0;
}
#endif
