//
//  거스름돈_14916.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 거스름돈 14916

#if 0
#include <iostream>
using namespace std;

int main() {
    int N; cin>>N;
    int Ans = N/5;
    N%=5;
    while(1) {
        if(N%2==0) {
            Ans+=N/2;
            break;
        } else {
            Ans-=1;
            N+=5;
            if(Ans<0) {
                Ans=-1;
                break;
            }
        }
    }
    printf("%d\n",Ans);
}
#endif
