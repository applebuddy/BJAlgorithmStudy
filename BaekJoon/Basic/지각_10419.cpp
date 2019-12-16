//
//  지각_10419.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 지각_10419
#if 0
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; cin>>T;
    for(int i=0; i<T; i++) {
        int N; cin>>N;
        int Ans=0;
        for(int i=0; i<100; i++) {
            if(i*i+i>N) break;
            else Ans=i;
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
