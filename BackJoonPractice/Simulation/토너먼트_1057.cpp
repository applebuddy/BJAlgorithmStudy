//
//  토너먼트_1057.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 토너먼트_1057 : Simulation Algorithm Problem

#include <iostream>
using namespace std;

void tournamentCount() {
    int round, a, b; cin>>round>>a>>b;
    int Ans=1;
    for(int i=round; i>=1; i/=2) {
        if((a%2==1 && a+1==b)
           || (b%2==1 && b+1==a)) {
            break;
        }
        a = a==1 ? 1 : (a+1)/2;
        b = b==1 ? 1 : (b+1)/2;
        Ans++;
    }
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    tournamentCount();
    return 0;
}
