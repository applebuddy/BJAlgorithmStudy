//
//  AhmedAly_10698.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - AhmedAly_10698
#if 0
#include <iostream>
using namespace std;

void AhmedAly() {
    int T; cin>>T;
    for(int i=0; i<T; i++) {
        int A,B,C,sum;
        char ch,equal;
        scanf("%d %c %d %c %d",&A,&ch,&B,&equal,&C);
        printf("Case %d: ",i+1);
        sum = ch=='+' ? A+B : A-B;
        if(sum!=C) printf("NO\n");
        else printf("YES\n");
    }
    return;
}

int main() {
    AhmedAly();
    return 0;
}
#endif
