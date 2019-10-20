//
//  희주의수학시험_8974.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 희주의 수학시험_8974
#if 0
#include <iostream>
#include <vector>
using namespace std;

void mathExamForHeeJoo() {
    int A,B,cnt=1,c=0; cin>>A>>B;
    vector<int> SV(B+1,0);
    for(int i=1; i<=B; i++) {
        c++;
        SV[i]=SV[i-1]+cnt;
        if(cnt==c) {
            cnt++;
            c=0;
        }
    }
    
    printf("%d\n",SV[B]-SV[A-1]);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    mathExamForHeeJoo();
    return 0;
}
#endif
