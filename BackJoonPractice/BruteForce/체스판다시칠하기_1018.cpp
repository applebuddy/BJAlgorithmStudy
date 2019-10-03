//
//  체스판다시칠하기_1018.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 체스판 다시 칠하기_1018

// INPUT)
//10 13
//BBBBBBBBWBWBW
//BBBBBBBBBWBWB
//BBBBBBBBWBWBW
//BBBBBBBBBWBWB
//BBBBBBBBWBWBW
//BBBBBBBBBWBWB
//BBBBBBBBWBWBW
//BBBBBBBBBWBWB
//WWWWWWWWWWBWB
//WWWWWWWWWWBWB

// OUTPUT)
//->12

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void redrawingChaseBoard() {
    int N,M; cin>>N>>M;
    string oneRow = "WBWBWBWB";
    string twoRow = "BWBWBWBW";
    vector<string> Chase(N,"");
    int Ans=2100000000;
    for(int i=0; i<N; i++) cin>>Chase[i];
    
    for(int a=0; a<=N-8; a++) {
        for(int b=0; b<=M-8; b++) {
            int sum=0,sum2=0;
            for(int i=a; i<a+8; i++) {
                if(i%2==0)
                    for(int j=0; j<oneRow.length(); j++) {
                        if(Chase[i][j+b]!=oneRow[j]) sum++;
                        else sum2++;
                    }
                else
                   for(int j=0; j<twoRow.length(); j++) {
                        if(Chase[i][j+b]!=twoRow[j]) sum++;
                        else sum2++;
                    }
            }
            
            Ans = min(Ans,min(sum,sum2));
        }
    }
    
    printf("%d\n",Ans);
    return;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    redrawingChaseBoard();
    return 0;
}


