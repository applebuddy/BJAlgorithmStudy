//
//  하얀칸_1100.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 하얀 칸_1100

#include <iostream>
#include <string.h>
using namespace std;

char chase[8][8];

void whiteSpace() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<8; i++) memset(chase[i], 0, sizeof(chase[i]));
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            cin>>chase[i][j];
    
    int Ans=0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(i%2==0) {
                if(j%2==0 && chase[i][j]=='F') Ans++;
            } else {
                if(j%2==1 && chase[i][j]=='F') Ans++;
            }
        }
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    whiteSpace();
//    return 0;
//}
