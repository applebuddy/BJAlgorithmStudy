//
//  나누기_1075.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 나누기_1075

// 1).문자열로 맨 끝 두개 0으로 만들 수도 있지만
//    string S = to_string(N);
//    S[S.length()-2]='0';
//    S[S.length()-1]='0';
//    N=stoi(S);

// 2) 그냥 100나누고 100 곱해주면 알아서 뒷 두자리 0이 됨
//    N = (N/100)*100;

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,F; cin>>N>>F;
    N = (N/100)*100;
    int residue = N%F;
    if(residue==0) printf("%02d\n",0);
    else {
        N+=(F-residue);
        string temp = to_string(N);
        temp = temp.substr(temp.length()-2);
        printf("%02d\n",stoi(temp));
    }
    return 0;
}
