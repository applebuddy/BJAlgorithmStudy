//
//  FourSquares_17626.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin>>N;
    int Ans = 0;
    vector<int> key;
    for(int i=1; i*i<=N; i++) {
        key.push_back(i*i);
    }
    
    for(int i=(int)key.size()-1; i>=0; i--) {
        if(key[i]<=N) {
            N-=key[i];
            printf("%d\n",key[i]);
            Ans++;
        }
    }
    Ans += N;
    printf("%d\n",Ans);
    return 0;
}
#endif
