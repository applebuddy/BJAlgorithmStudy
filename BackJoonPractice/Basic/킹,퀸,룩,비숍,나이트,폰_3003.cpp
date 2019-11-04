//
//  킹,퀸,룩,비숍,나이트,폰_3003.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 킹,퀸,룩,비숍,나이트,폰_3003
#if 0
#include <iostream>
using namespace std;

int CHASE[] = {1,1,2,2,2,8};
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<6; i++) {
        int n; cin>>n;
        printf("%d",CHASE[i]-n);
        if(i!=5) printf(" ");
    }
    printf("\n");
    return 0;
}
#endif
