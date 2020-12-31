//
//  파일완전삭제_9243.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 파일완전삭제_9243

#include <iostream>
#include <string>
using namespace std;

void completeFileRemoval() {
    int N; cin>>N;
    string S="",S2=""; cin>>S>>S2;
    if(N%2==0) {
        if(S==S2) printf("Deletion succeeded\n");
        else printf("Deletion failed\n");
    } else {
        bool flag=true;
        for(int i=0; i<S.length(); i++) {
            if(S[i]==S2[i]) {
                flag=false; break;
            }
        }
        if(flag) printf("Deletion succeeded\n");
        else printf("Deletion failed\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    completeFileRemoval();
//    return 0;
//}
