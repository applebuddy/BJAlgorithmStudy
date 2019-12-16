//
//  전투드로이드가격_5361.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 전투 드로이드 가격_5361
#if 0
#include <iostream>
#define MAX 5
using namespace std;

int main() {
    double droid[] = {350.34, 230.9, 190.55, 125.3, 180.9};
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        double Ans=0.0;
        for(int i=0; i<MAX; i++) {
            int n; cin>>n;
            Ans += n*droid[i];
        }
        printf("$%.2lf\n",Ans);
    }
    return 0;
}
#endif
