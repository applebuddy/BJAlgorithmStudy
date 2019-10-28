//
//  번호표교환_11949.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 28/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 번호표교환
#if 0
#include <iostream>
#include <string.h>
using namespace std;

void exchangeNumberTicket() {
    int N,M; cin>>N>>M;
    int arr[N]; memset(arr,0,sizeof(arr));
    for(int i=0; i<N; i++) cin>>arr[i];
    for(int i=2; i<=M; i++) {
        for(int j=0; j<N-1; j++) {
            if(arr[j]%i > arr[j+1]%i) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<N; i++) printf("%d\n",arr[i]);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    exchangeNumberTicket();
    return 0;
}
#endif
