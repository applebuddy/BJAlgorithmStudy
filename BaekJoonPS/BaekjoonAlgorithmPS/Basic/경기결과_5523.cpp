//
//  경기결과_5523.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 경기결과_5523
#if 0
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    int score[2] = {0,0};
    while(T--) {
        int A,B; cin>>A>>B;
        if(A>B) score[0]++;
        else if(A<B) score[1]++;
    }
    
    printf("%d %d\n",score[0],score[1]);
    return 0;
}
#endif
