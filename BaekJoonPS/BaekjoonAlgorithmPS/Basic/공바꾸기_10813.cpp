//
//  공바꾸기_10813.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


/// MARK: - 공 바꾸기_10813
#if 0
#include <iostream>
using namespace std;

void swapTheBall() {
    int N,R; cin>>N>>R;
    int arr[N+1];
    for(int i=1; i<=N; i++) arr[i]=i;
    for(int i=0; i<R; i++) {
        int A,B; cin>>A>>B;
        if(A==B) continue;
        int temp = arr[A];
        arr[A] = arr[B];
        arr[B] = temp;
    }
    
    for(int i=1; i<=N; i++) {
        printf("%d ",arr[i]);
        if(i==N) break;
    }
    puts("");
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    swapTheBall();
    return 0;
}
#endif
