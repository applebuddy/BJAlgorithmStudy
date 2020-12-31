//
//  반도체설계_2352.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 시간초과 버전 ㅠ.ㅠ
//vector<int> C(40001,1);
//void bandoChaeDesign() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    int N; cin>>N;
//    vector<int> V(N,0);
//
//    for(int i=0; i<N; i++) cin >> V[i];
//
//    for(int i=0; i<N; i++) {
//        for(int j=i+1; j<N; j++) {
//            if(V[j]>V[i]) {
//                C[j] = max(C[j],C[i]+1);
//            }
//        }
//    }
//    printf("%d\n",*max_element(C.begin(),C.end()));
//    return;
//}

// 반도체설계_2352 : 가장 긴 증가하는수열 문제, ✭ LIS Problem

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void effectiveBandoChaeDesign() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;
    cin >> N;
    vector<int> V(40001,0);
    vector<int> Ans;
    for(int i=0; i<N; i++) cin >> V[i];
    for(int i=0; i<N; i++) {
        int idx = lower_bound(Ans.begin(), Ans.end(), V[i]) - Ans.begin(); // V[i]값 이상 존재하는 반복자를 반환한다.
        if(idx == Ans.size()) Ans.push_back(V[i]); // Ans벡터 안에 만약 V[i]이상의 값이 없으면 V[i]를 Ans 벡터에 추가
        else Ans[idx] = V[i]; // Ans벡터 안에 V[i]이상의 값이 존재했다면, 그곳의 값을 V[i]로 만든다.
    }
    printf("%d\n",(int)Ans.size());
}

//int main() {
//    effectiveBandoChaeDesign();
//    return 0;
//}
