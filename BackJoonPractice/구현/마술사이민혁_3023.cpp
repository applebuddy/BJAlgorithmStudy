//
//  마술사이민혁_3023.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 마술사이민혁_3023

//  입력 예시

//    2 2
//    #.
//    .#
//    3 3
//  출력 예시

//    #..#
//    .##.
//    .#..
//    #..#
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N,M,X,Y; cin>>N>>M;
    vector<vector<char>> P(N,vector<char>(M,0));
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> P[i][j];
        }
    }
    cin >> X >> Y;
    
    for(int i=0; i<N*2; i++) {
        for(int j=0; j<M*2; j++) {
            char C='.';
            if(i<N && j<M) C = P[i][j];
            else if(i>=N && j>=M) {
                C = P[N*2-i-1][M*2-j-1];
            }else if(i>=N && j<M) {
                C = P[N*2-i-1][j];
            }else {
                C = P[i][M*2-j-1];
            }
            
            if(i==X-1 && j==Y-1) {
                if(C=='.') C='#';
                else C='.';
            }
            printf("%c",C);
        }
        printf("\n");
    }
    return 0;
}
