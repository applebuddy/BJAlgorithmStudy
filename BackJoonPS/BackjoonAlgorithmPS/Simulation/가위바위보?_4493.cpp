//
//  가위바위보?_4493.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가위바위보?_4493
#if 0
#include <iostream>
using namespace std;

int main() {
    
    int T; cin>>T;
    while(T--) {
        int t; cin>>t;
        int score[2] = {0,0};
        while(t--) {
            char a,b; cin>>a>>b;
            if(a==b) continue;
            if(a=='R') {
                if(b=='S') score[0]++;
                else score[1]++;
            } else if(a=='S') {
                if(b=='P') score[0]++;
                else score[1]++;
            } else if(a=='P') {
                if(b=='R') score[0]++;
                else score[1]++;
            }
        }
        
        if(score[0]==score[1]) printf("TIE\n");
        else if(score[0]>score[1]) printf("Player 1\n");
        else printf("Player 2\n");
    }
    
    return 0;
}
#endif
