//
//  만취한상범_6359.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 13/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <string.h>
using namespace std;

void drunkenSangBeom() {
    int T; cin>>T;
    while(T--) {
        int N, Ans=0; cin>>N;
        int arr[N]; memset(arr,1,sizeof(arr));
        for(int i=0; i<N; i++) {
            for(int j=i; j<N; j+=(i+1)) {
                arr[j] = arr[j] == 1 ? 0 : 1;
            }
        }
        
        for(auto a: arr) if(a==1) Ans++;
        printf("%d\n",Ans);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    drunkenSangBeom();
    return 0;
}
#endif
