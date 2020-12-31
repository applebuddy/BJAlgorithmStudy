//
//  특별한날_10768.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 특별한날_10768
#if 0
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int A,B; cin>>A>>B;
    if(A==2 && B==18) printf("Special\n");
    else if((A==2&&B>18) || A>2) printf("After\n");
    else printf("Before\n");
    return 0;
}
#endif
