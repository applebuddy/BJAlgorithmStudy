//
//  다리놓기_1010.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - PlaceTheBridge

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void placeTheBridge() {
    int T; cin>>T;
    while(T--) {
        int a,b; cin>>a>>b;
        vector<vector<int>> Cache(a+1,vector<int>(b+1,0));
        int Ans=0;
        if(a>b) Ans=0;
        else if(a==b) Ans=1;
        else if(a==1) Ans=b;
        else {
            for(int i=0; i<=b; i++) Cache[1][i]=i;
            for(int i=2; i<=a; i++) {
                for(int j=i; j<=b; j++) {
                    for(int k=j; k>=i; k--) {
                        Cache[i][j]+=Cache[i-1][k-1];
                    }
                    if(i==a && j==b) Ans=Cache[i][j];
                }
            }
        }
        printf("%d\n",Ans);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    placeTheBridge();
//    return 0;
//}
