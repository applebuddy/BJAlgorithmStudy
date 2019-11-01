//
//  약수구하기_2501.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 약수 구하기_2501
#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,K,cnt=0; cin>>N>>K;
    vector<int> Ans = {1};
    if(K==1) return !printf("%d\n",Ans.front());
    for(int i=1; i<=N/2; i++) {
        if(N%i==0) {
            cnt++;
            Ans.push_back(i);
            if(cnt==K) return !printf("%d\n",Ans.back());
        }
    }
    printf("%d\n",K!=cnt+1 ? 0 : N);
    return 0;
}
#endif
