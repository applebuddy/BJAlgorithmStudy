//
//  플러그_2010.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 플러그_2010
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    int Ans; cin>>Ans;
    T--;
    while(T--) {
        int N; cin>>N;
        Ans+=N-1;
    }
    printf("%d\n",Ans);
    return 0;
}
#endif
