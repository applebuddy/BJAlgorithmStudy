//
//  가장긴증가하는부분수열2_12015.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; cin>>T;
    vector<int> V(T,0);
    vector<int> Ans;
    for(int i=0; i<T; i++) cin>>V[i];
    for(int i=0; i<T; i++) {
        auto IDX = (lower_bound(Ans.begin(), Ans.end(), V[i]) - Ans.begin());
        if(IDX == Ans.size()) Ans.push_back(V[i]);
        else Ans[IDX] = V[i];
    }
    
    printf("%d\n",(int)Ans.size());
    puts("");
    
    return 0;
}
#endif
