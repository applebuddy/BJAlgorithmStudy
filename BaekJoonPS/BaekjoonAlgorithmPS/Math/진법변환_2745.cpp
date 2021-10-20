//
//  진법변환_2745.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 진법변환_2745
#if 0
#include <iostream>
#include <string>
using namespace std;

int newPow(int N, int R) {
    if(R==0) return 1;
    int Ans = 1;
    int num = N;
    while(R>0) {
        if(R%2==0) {
            num*=num;
            R/=2;
        }
        else {
            Ans *= num;
            R--;
        }
    }
    return Ans;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string N;
    int B; cin>>N>>B;
    int cnt=0;
    int Ans=0;
    for(int i=(int)N.length()-1; i>=0; i--) {
        int val = N[i]>='A'&&N[i]<='Z' ? N[i]-'A'+10 : N[i]-'0';
        Ans += newPow(B, cnt) * val;
        cnt++;
    }
    printf("%d\n",Ans);
    return 0;
}
#endif
