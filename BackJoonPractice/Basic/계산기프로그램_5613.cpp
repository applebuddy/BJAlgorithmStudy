//
//  계산기프로그램_5613.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 계산기프로그램_5613
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int Ans=0;
    cin>>Ans;
    bool flag = true;
    
    while(1) {
        
        int B=0;
        char op;
        cin>>op;
        if(op!='=') cin>>B;
        switch (op) {
            case '+':
                Ans=Ans+B;
                break;
            case '-':
                Ans=Ans-B;
                break;
            case '*':
                Ans=Ans*B;
                break;
            case '/':
                Ans=Ans/B;
                break;
            default:
                flag = false;
        }
        if(!flag) break;
    }
    printf("%d\n",Ans);
    return 0;
}
#endif
