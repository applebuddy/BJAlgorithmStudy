//
//  J박스_5354.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - J박스_5354

#include <iostream>
#include <string>
using namespace std;

void theJBox() {
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        for(int i=0; i<N; i++) {
            string S="";
            if(i==0 || i==N-1) S = string(N,'#');
            else {
                S+='#';
                for(int i=0; i<N-2; i++) S+='J';
                S+='#';
            }
            printf("%s\n",S.c_str());
        }
        printf("\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theJBox();
//    return 0;
//}
