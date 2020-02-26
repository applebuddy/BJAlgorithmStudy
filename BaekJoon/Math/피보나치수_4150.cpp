//
//  피보나치수_4150.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 피보나치수 4150
// MARK: C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;
int len = 1001;

vector<int> p(len,0);
vector<int> pp(len,0);
vector<int> Ans(len,0);

void plusNum() {
    int rem = 0;
    
    for(int i=len-1; i>=0; i--) {
        Ans[i] = (p[i] + pp[i] + rem) % 10;
        rem = (p[i] + pp[i] + rem) / 10;
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    if(N==1 || N==2) return !printf("%d\n",1);
    pp.back() = 1;
    p.back() = 1;
    for(int i=3; i<=N; i++) {
        plusNum();
        pp = p;
        p = Ans;
    }
    
    string result = "";
    bool flag = false;
    for(int i=0; i<len; i++) {
        if(flag==false && Ans[i]!=0) flag = true;
        if(flag == true) {
            result += to_string(Ans[i]);
        }
    }
    printf("%s\n",result.c_str());
    return 0;
}
#endif
