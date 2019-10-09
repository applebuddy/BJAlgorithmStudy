//
//  오타맨고창영_2711.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 오타맨 고창영_2711

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void misspellingManChangYoung() {
    int T; cin>>T;
    while(T--) {
        int N;
        string S;
        cin>>N>>S;
        S.erase(S.begin()+N-1,S.begin()+N);
        printf("%s\n",S.c_str());
    }
    return;
}

//int main() {
//    misspellingManChangYoung();
//    return 0;
//}
