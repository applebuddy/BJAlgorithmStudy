//
//  중복빼고정렬하기_10867.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 중복빼고정렬하기_10867
#if 0
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    set<int> ST;
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        ST.insert(num);
    }
    
    set<int>::iterator iter = ST.begin();
    for(; iter!=ST.end(); iter++) {
        printf("%d",*iter);
        if(iter!=ST.end()) printf(" ");
    }
    puts("");
    return 0;
}
#endif
