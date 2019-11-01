//
//  고급수학_7510.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
/// MARK: - 고급수학_7510
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    for(int i=1; i<=T; i++) {
        long long arr[3];
        long SUM=0,MAX=0;
        for(int i=0; i<3; i++) {
            cin>>arr[i];
            arr[i]*=arr[i];
            MAX = arr[i] > MAX ? arr[i] : MAX;
            SUM += arr[i];
        }
        printf("Scenario #%d:\n",i);
        if(SUM==MAX*2) printf("yes\n");
        else printf("no\n");
        if(i!=T) puts("");
    }
    return 0;
}
#endif
