//
//  줄세우기_11536.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 줄 세우기ㅣ_11536
#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void settingLine() {
    int T; cin>>T;
    int status = 0;
    vector<string> V(T,"");
    for(int i=0; i<T; i++) cin>>V[i];
    for(int i=0; i<T-1; i++) {
        if(V[i]>V[i+1]) {
            if(status == 0) status = -1;
            else if(status == 1) {
                printf("NEITHER\n");
                return;
            }
        }
        if(V[i]<V[i+1]) {
            if(status == 0) status = 1;
            else if(status == -1) {
                printf("NEITHER\n");
                return;
            }
        }
    }
    status == 1 ? printf("INCREASING\n") : printf("DECREASING\n");
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    settingLine();
    return 0;
}
#endif
