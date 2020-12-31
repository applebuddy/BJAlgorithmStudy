//
//  캥거루세마리_2965.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 캥거루세마리_2965
#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int arr[3];
    for(int i=0; i<3; i++) cin>>arr[i];
    sort(arr, arr+3);
    printf("%d\n",arr[1]-arr[0] > arr[2]-arr[1] ? arr[1]-arr[0]-1 : arr[2]-arr[1]-1);
    return 0;
}
#endif
