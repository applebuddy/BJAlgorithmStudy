//
//  기상캐스터_10709.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

///  MARK: - 기상캐스터

//   // 입력 예시)
//   3 4
//   c..c
//   ..c.
//   ....
//
//   // 출력 예시)
//   0 1 2 0
//   -1 -1 0 1
//   -1 -1 -1 -1

#include <iostream>
#include <vector>
using namespace std;

void forecaseMaster() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int H,W;
    cin >> H >> W;
    vector<vector<char>> IV(H,vector<char>(W,0));
    
    for(int i=0; i<H; i++)
        for(int j=0; j<W; j++)
            cin >> IV[i][j];

    for(int i=0; i<H; i++) {
        int time=0;
        bool cloud = false;
        for(int j=0; j<W; j++) {
            if(cloud==false && IV[i][j]=='.') printf("%d ",-1);
            else {
                if(IV[i][j]=='c') {
                    time=0;
                    cloud = true;
                }
                printf("%d ",time);
            }
            time++;
        }
        printf("\n");
    }
}

//int main() {
//    forecaseMaster();
//    return 0;
//}
