//
//  공_1547.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void theBall() {
    int Ans=1;
    int T; cin>>T;
    while(T--) {
        int a,b; cin>>a>>b;
        if(a==b) continue;
        if(a==Ans) Ans=b;
        else if(b==Ans) Ans=a;
    }
    printf("%d\n",(Ans<=3)&&(Ans>=1) ? Ans : -1);
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    theBall();
//    return 0;
//}
