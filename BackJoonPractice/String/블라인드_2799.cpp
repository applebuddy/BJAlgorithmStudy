//
//  블라인드_2799.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 블라인드_2799
// 입력)
//1 3
//################
//#****#****#****#
//#****#****#****#
//#****#....#****#
//#....#....#****#
//################

// 출력)
// -> 0 0 1 1 1

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void blind() {
    int N,M; cin>>N>>M;
    vector<int> Ans(5,0);
    vector<string> Window(N*5+2,"");
    for(int i=0; i<N*5+1; i++) {
        string str; cin>>str;
        Window[i] = str;
    }
    
    int x = 1;
    int y = 1;
    for(int i=0; i<N; i++) {
        
        int cnt=0;
        while(cnt < M) {
            int c=0;
            for(int i=0; i<4; i++) {
                c=i;
                if(Window[y+i][x]=='.') break;
                if(i==3) c++;
            }
            Ans[c]++;
            cnt++;
            x+=5;
        }
        x=1;
        y+=5;
    }
    
    for(auto v : Ans) printf("%d ",v);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    blind();
//    return 0;
//}


