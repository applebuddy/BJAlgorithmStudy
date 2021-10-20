//
//  완전제곱수_6131.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 완전제곱수 6131

#if 0
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    int Ans=0;
    for(int B=1; B<=500; B++) {
        for(int A=1; A<=500; A++) {
            if(A==B) continue;
            if(A*A - B*B > N) break;
            if(A*A == B*B+N) Ans++;
        }
    }
    printf("%d\n",Ans);
    return 0;
}
#endif
