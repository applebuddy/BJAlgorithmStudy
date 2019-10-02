//
//  우리집엔도서관이있어_2872.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - JOI와IOI_5588

#include <iostream>
#include <vector>
using namespace std;

void thereIsLibraryInMyHome() {
    int T; cin>>T;
    vector<int> NV(T,0);
    int Ans=0;
    int chk=T;

    for(int i=0; i<T; i++) cin>>NV[i];
    for(int i=T-1; i>=0; i--) {
        if(chk==NV[i]) chk--;
        else Ans++;
    }
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    thereIsLibraryInMyHome();
    return 0;
}
