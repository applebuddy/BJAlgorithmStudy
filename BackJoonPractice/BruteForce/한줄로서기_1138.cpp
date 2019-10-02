//
//  한줄로서기_1138.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 한 줄로 서기_1138

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void standInOneLine() {
    int N; cin>>N;
    vector<int> Ans(N,0);
    vector<int> pv(N,0);
    for(int i=0; i<N; i++) cin>>pv[i];
    
    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<N; j++) {
            if(Ans[j]>0) continue;
            if(cnt==pv[i]) {
                Ans[j]=i+1;
                break;
            } else {
                cnt++;
            }
        }
    }
    
    for(int i=0; i<N; i++) printf("%d ",Ans[i]);
    printf("\n");
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    standInOneLine();
//    return 0;
//}

// * 런타임 에러 답안
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    vector<int> HV = {1,2,3,4};
//    int N; cin>>N;
//    vector<int> CV(N,0);
//    for(int i=0; i<N; i++) cin>>CV[i];
//    if(N==1) {
//        printf("%d\n",1);
//        return 0;
//    }
//
//    do {
//        vector<int> temp(N+1,0);
//        for(int i=0; i<N; i++) {
//            for(int j=i; j<N; j++) {
//                if(HV[i] > HV[j]) temp[HV[j]-1]++;
//            }
//        }
//
//        bool flag=true;
//        for(int i=0; i<N; i++) {
//            if(temp[i]!=CV[i]) {
//                flag=false;
//                break;
//            }
//        }
//        if(flag) {
//            for(int i=0; i<N; i++) printf("%d ",HV[i]);
//            printf("\n");
//            break;
//        }
//    }while(next_permutation(HV.begin(), HV.end()));
//    return 0;
//}
