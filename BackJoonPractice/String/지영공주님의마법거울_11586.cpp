//
//  지영공주님의마법거울_11586.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 지영 공주님의 마법 거울

//  * Example)
//  - INPUT
//   2
//   AB
//   BS
//   3

//  - OUTPUT
//   BS
//   AB

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

void magicMirrorOfPrincessJiyoung() {
    int N,status; cin>>N;
    vector<string> Ans(N,"");
    for(int i=0; i<N; i++) {
        string temp="";
        cin>>temp;
        Ans[i] = temp;
    }
    cin>>status;
    if(status==1) {
        for(auto s : Ans) printf("%s\n",s.c_str());
    }
    else if(status==2) {
        for(auto s : Ans) {
            reverse(s.begin(),s.end());
            printf("%s\n",s.c_str());
        }
    }
    else {
        for(int i=0; i<Ans.size(); i++) {
            for(int j=0; j<Ans[i].length(); j++) {
                printf("%c",Ans[abs(i-(N-1))][j]);
            }
            printf("\n");
        }
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    magicMirrorOfPrincessJiyoung();
//    return 0;
//}
