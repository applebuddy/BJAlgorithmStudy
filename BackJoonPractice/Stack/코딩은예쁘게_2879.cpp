//
//  코딩은예쁘게_2879.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
#include <cmath>
#define endl '\n'
using namespace std;

void forThePrettierCoding() {
    int T; cin>>T;
    vector<int> BFO(T,0);
    vector<int> AFT(T,0);
    vector<int> C(T,0);
    for(int i=0; i<T; i++) cin>>BFO[i];
    for(int i=0; i<T; i++) {
        cin>>AFT[i];
        C[i] = AFT[i]-BFO[i];
    }
    
    int prev = C[0];
    int Ans = 0;
    for(int i=1; i<(int)C.size(); i++) {
        // 차잇 값이 양수 일 경우, 오름차순 유무를 체크하며 연산
        if(C[i]>=0) {
            if(prev<0) Ans-=prev; // 만약 반대 부호값이 나왔을 경우 이전까지의 차잇값 연산누적
            else if(prev > C[i]) Ans+=prev-C[i]; // 오름차순이 깨지면, 이전차잇값 - 현재 차잇값 연산누적 후, 현재시점부터 다시 오름차순 체크
            prev=C[i]; // 오름차순 성립 간 가장 절대값이 큰 차잇값 저장(이전 까지의 차잇값 체크를 위해 차잇값 저장)
        } else {
        // 차잇 값이 음수 일 경우, 내림차순 유무를 체크하며 연산
            if(prev>=0) Ans+=prev; // 만약 반대 부호값이 나왔을 경우 이전까지의 차잇값 연산누적
            else if(prev < C[i]) Ans+=C[i]-prev; // 내림차순이 깨지면, 현재 차잇값 - 이전차잇값(음수므로 반대로 연산) 후 다시 내림차순 체크
            prev=C[i]; // 내림차순 성립 간 가장 절대값이 큰 차잇값 저장(이전 까지의 차잇값 체크를 위해 차잇값 저장)
        }
    }
    Ans+=abs(prev);
    cout << Ans << endl;
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    forThePrettierCoding();
    return 0;
}
#endif

