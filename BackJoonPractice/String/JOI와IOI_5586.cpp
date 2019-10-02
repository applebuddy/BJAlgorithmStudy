//
//  JOI와IOI_5586.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - JOI와IOI_5586

#include <iostream>
#include <string>
using namespace std;

typedef pair<int,int> Pair;
void JOIAndIOI() {
    string str; cin>>str;
    Pair Ans = make_pair(0,0);
    for(int i=0; i<(int)str.length()-2;) {
        string cStr = str.substr(i,3);
        if(cStr=="JOI") {
            Ans.first++;
            i+=2;
        } else if(cStr=="IOI") {
            Ans.second++;
            i+=2;
        } else {
            i++;
        }
    }
    printf("%d\n%d\n",Ans.first,Ans.second);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    JOIAndIOI();
//    return 0;
//}
