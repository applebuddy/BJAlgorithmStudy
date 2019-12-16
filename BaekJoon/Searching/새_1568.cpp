//
//  새_1568.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 새_1568

#include <iostream>
using namespace std;

void birdCounting() {
    int N; cin>>N;
    int cnt=0;
    if(N==cnt) {
        printf("%d\n",1);
        return;
    }
    
    int sum=0, Ans=0;
    
    while(sum < N) {
        if(N < sum+cnt+1) cnt=1;
        else cnt++;
        sum+=cnt;
        Ans++;
    }
    
    printf("%d\n",Ans);
        
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    birdCounting();
//    return 0;
//}
