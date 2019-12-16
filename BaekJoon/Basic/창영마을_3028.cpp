//
//  창영마을_3028.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 창영마을_3028
#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[3] = {1,0,0};
    string S; cin>>S;
    for(int i=0; i<S.length(); i++) {
        if(S[i]=='A') swap(arr[0],arr[1]);
        else if(S[i]=='B') swap(arr[1],arr[2]);
        else if(S[i]=='C') swap(arr[0],arr[2]);
    }
    for(int i=0; i<3; i++) {
        if(arr[i]==1) return !printf("%d\n",i+1);
    }
    return 0;
}
#endif
