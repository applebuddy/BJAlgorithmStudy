//
//  얼마?_9325.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 얼마?
#if 0
#include <iostream>
using namespace std;

void howMuchIsThat() {
    int T; cin>>T;
    while(T--) {
        int P; cin>>P;
        int n; cin>>n;
        for(int i=0; i<n; i++) {
            int num,p; cin>>num>>p;
            P += num*p;
        }
        printf("%d\n",P);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    howMuchIsThat();
    return 0;
}
#endif 
