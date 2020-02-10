//
//  달팽이는올라가고싶다_2869.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 달팽이는 올라가고 싶다 2869
// MARK: - 문제풀이

// ex)
//. 5 -> 4
//. 9 -> 8
//. 13 -> 12
//. 17

#if 0
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll A,B,V; cin>>A>>B>>V;
    if(V <= A) return !printf("%d\n",1);
    printf("%lld\n",(((V-A)-1)/(A-B)+1)+1);
    return 0;
}
#endif

