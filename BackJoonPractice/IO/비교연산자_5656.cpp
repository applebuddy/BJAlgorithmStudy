//
//  비교연산자_5656.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 비교연산자_5656
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int cnt=1;
    while(1) {
        int A,B;
        string S;
        cin>>A>>S>>B;
        if(S=="E") break;
        printf("Case %d: ",cnt);
        if(S=="!=") printf("%s\n",A!=B ? "true" : "false");
        else if(S==">") printf("%s\n",A>B ? "true" : "false");
        else if(S==">=") printf("%s\n",A>=B ? "true" : "false");
        else if(S=="==") printf("%s\n",A==B ? "true" : "false");
        else if(S=="<=") printf("%s\n",A<=B ? "true" : "false");
        else if(S=="<") printf("%s\n",A<B ? "true" : "false");
        cnt++;
    }
    return 0;
}
#endif
