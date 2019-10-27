//
//  중간계전쟁_4435.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 중간계 전쟁
#if 0
#include <iostream>
#define GAN_MAX 6
#define SAU_MAX 7
using namespace std;

int GANDALF[6] = {1,2,3,3,4,10};
int SAURON[7] = {1,2,2,2,3,5,10};

void battleInMiddleWorld() {
    int T; cin>>T;
    for(int i=1; i<=T; i++) {
        int ganNum=0,sauNum=0;
        for(int i=0; i<GAN_MAX; i++) {
            int n; cin>>n;
            ganNum += n*GANDALF[i];
        }
        for(int i=0; i<SAU_MAX; i++) {
            int n; cin>>n;
            sauNum += n*SAURON[i];
        }
        printf("Battle %d: ",i);
        if(ganNum==sauNum) printf("No victor on this battle field\n");
        else if(ganNum>sauNum) printf("Good triumphs over Evil\n");
        else printf("Evil eradicates all trace of Good\n");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    battleInMiddleWorld();
    return 0;
}
#endif
