//
//  FUNGHI_10643.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - FUNGHI_10643

#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

void FUNGHI() {
    vector<int> Pizza(MAX,0);
    for(int i=0; i<8; i++) cin>>Pizza[i];
    int Ans=0, sum=Pizza[0]+Pizza[1]+Pizza[2]+Pizza[3];
    Ans = sum;
    for(int i=0; i<8; i++) {
        sum-=Pizza[i];
        if(i<4) {
            sum+=Pizza[i+4];
            Ans = Ans < sum ? sum : Ans;
        } else {
            sum+=Pizza[i-4];
            Ans = Ans < sum ? sum : Ans;
        }
    }
    
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    FUNGHI();
//    return 0;
//}
