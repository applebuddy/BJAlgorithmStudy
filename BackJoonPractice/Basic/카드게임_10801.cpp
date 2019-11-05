//
//  카드게임_10801.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 카드게임_10801
#if 0
#include <iostream>
using namespace std;

int score[2] = {0,};

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int A[10];
    for(int i=0; i<10; i++) cin>>A[i];
    for(int i=0; i<10; i++) {
        int n; cin>>n;
        if(A[i]>n) score[0]++;
        else if(A[i]<n) score[1]++;
    }
    
    if(score[0]==score[1]) printf("D\n");
    else printf("%s\n",score[0]>score[1] ? "A" : "B");
    return 0;
}
#endif
