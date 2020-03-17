//
//  집합_11723.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 집합 11723
// MARK: Hash C++ 문제풀이

#if 0
#include <iostream>
#include <unordered_map>
using namespace std;
typedef unordered_map<int, int> UM;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    UM UMP, temp;
    for(int i=1; i<=20; i++) temp[i]=1;
    int T; cin>>T;
    while(T--) {
        string S;
        int N;
        cin>>S;
        if(S=="all") {
            UMP = temp;
            continue;
        } else if(S=="empty") {
            UMP = UM();
            continue;
        }
        cin>>N;
        if(S=="add" && UMP[N]==0) UMP[N]=1;
        if(S=="remove" && UMP[N]==1) UMP[N]=0;
        if(S=="check") printf("%d\n",UMP[N]);
        if(S=="toggle") UMP[N] = UMP[N]==0 ? 1 : 0;
    }
    return 0;
}
#endif
