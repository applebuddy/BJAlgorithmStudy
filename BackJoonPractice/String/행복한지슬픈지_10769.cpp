//
//  행복한지슬픈지_10769.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 행복한지 슬픈지_10789

#include <iostream>
#include <string>
using namespace std;

void whetherHappyOrNot() {
    string str;
    getline(cin, str, '\n');
    int smile=0, sad=0;
    while(1) {
        auto idx = str.find(':');
        if(idx==string::npos) break;
        else {
            string compStr = str.substr(idx,3);
            if(compStr==":-)") {
                smile++;
                str = str.substr(idx+3);
                continue;
            }
            if(compStr==":-(") {
                sad++;
                str = str.substr(idx+3);
                continue;
            }
            str = str.substr(idx+1);
        }
    }
    
    if(smile > sad) printf("happy\n");
    else if(smile < sad) printf("sad\n");
    else if(smile==0 && sad==0) printf("none\n");
    else printf("unsure\n");
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    whetherHappyOrNot();
//    return 0;
//}
