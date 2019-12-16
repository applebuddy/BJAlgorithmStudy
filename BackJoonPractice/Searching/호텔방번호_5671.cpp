//
//  호텔방번호_5671.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 호텔방번호 5671

#if 0
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> DP(5001,-1);

int checkRoom(int idx) {
    map<int,int> MP;
    while(idx>0) {
        if(MP[idx%10]==1) return 0;
        MP[idx%10]++;
        idx/=10;
    }
    return 1;
}

int main() {
    
    while(1) {
        int from,to;
        if(scanf("%d %d",&from,&to)==EOF) break;
        int Ans=0;
        for(int i=from; i<=to; i++) {
            if(DP[i] != -1) Ans+=DP[i];
            else {
                DP[i] = checkRoom(i);
                Ans+=DP[i];
            }
        }
        printf("%d\n",Ans);
    }
    
    return 0;
}
#endif
