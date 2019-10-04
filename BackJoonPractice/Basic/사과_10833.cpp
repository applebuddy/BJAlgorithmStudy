//
//  사과_10833.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 사과_10833

#include <iostream>
using namespace std;

int theApple() {
    int N,Ans=0;
    cin>>N;
    while(N--) {
        int a,n; cin>>a>>n;
        Ans+=n%a;
    }
    
    return Ans;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int Ans = theApple();
//    printf("%d\n",Ans);
//    return 0;
//}
