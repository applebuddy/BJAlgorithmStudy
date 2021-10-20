//
//  헤일스톤수열_3943.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/31.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <string.h>
using namespace std;
typedef long long ll;

int main() {
    int N; cin>>N;
    ll arr[N];
    memset(arr, 0, N * sizeof(ll));
    for(int i=0; i<N; i++) {
        ll num; cin>>num;
        arr[i] = num;
        while(num>1) {
            if(num%2==0) num/=2;
            else num = num*3+1;
            arr[i] = arr[i] < num ? num : arr[i];
        }
    }
    
    for(int i=0; i<N; i++) printf("%lld\n",arr[i]);
    return 0;
}
#endif
