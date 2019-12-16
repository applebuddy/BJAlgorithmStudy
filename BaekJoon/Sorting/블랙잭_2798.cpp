//
//  블랙잭_2798.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 블랙잭_2798

#include <iostream>
#include <string.h>
using namespace std;

void blackJack() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,C; cin>>N>>C;
    int arr[N]; memset(arr,0,sizeof(arr));
    int Ans=-2100000000;
    for(int i=0; i<N; i++) cin>>arr[i];
    
    for(int i=0; i<N-2; i++) {
        if(C<arr[i]) continue;
        for(int j=i+1; j<N-1; j++) {
            if(C<(arr[i]+arr[j])) continue;
            for(int k=j+1; k<N; k++) {
                int dif = C-(arr[i]+arr[j]+arr[k]);
                if(dif < 0) continue;
                if(dif < C-Ans) Ans=arr[i]+arr[j]+arr[k];
            }
        }
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    blackJack();
//    return 0;
//}
