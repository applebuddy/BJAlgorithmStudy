//
//  트럭주차_2979.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 트럭주차_2979 : Basic Simulation Problem

#include <iostream>
#include <vector>
using namespace std;

void parkingTruck() {
    int one,two,three,min=2100000000,max=0; cin>>one>>two>>three;
    vector<int> time(101,0);
    for(int i=0; i<3; i++) {
        int s,e; cin>>s>>e;
        min = min > s ? s : min;
        max = max < e ? e : max;
        time[s]++;
        time[e]--;
    }
    
    int cnt=0,Ans=0;
    int endCnt=0;
    for(int i=min; i<=max; i++) {
        if(time[i]>0) cnt+=time[i];
        if(time[i]<0) {
            cnt+=time[i];
            endCnt++;
            if(endCnt==3) break;
        }
        
        if(cnt==1) Ans+=one;
        else if(cnt==2) Ans+=two*2;
        else if(cnt==3) Ans+=three*3;
    }
    
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    parkingTruck();
    return 0;
}
