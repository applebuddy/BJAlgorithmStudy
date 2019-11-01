//
//  과자_10156.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 과자_10156
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int A,B,C; cin>>A>>B>>C;
    int residue = A*B-C;
    printf("%d\n",residue<=0 ? 0 : residue);
    return 0;
}
#endif
