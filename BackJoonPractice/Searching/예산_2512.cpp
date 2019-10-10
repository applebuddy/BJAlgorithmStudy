//
//  예산_2512.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 예산_2512
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int theBudgets() {
    int T,M; cin>>T;
    vector<int> V(T,0);
    for(int i=0; i<T; i++) cin>>V[i];
    cin>>M;
    
    int len = (int)V.size();
    sort(V.begin(), V.end());
    auto iter = V.begin();
    
    for(; iter!=V.end(); iter++) {
        if(*iter > M/len) {
            return M/len;
        } else {
            M-=*iter;
        }
        len--;
    }
    
    return V.back();
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int Ans = theBudgets();
    printf("%d\n",Ans);
    return 0;
}
