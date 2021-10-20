//
//  디지털루트_6378.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 디지털루트_6328

#include <iostream>
#include <string>

using namespace std;

void digitalRoot() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        string N;
        int Ans=0; cin>>N;
        if(N=="0") break;
        
        while(1) {
            for(int i=0; i<N.length(); i++) {
                Ans += N[i]-'0';
            }
            
            if(Ans<10) {
                printf("%d\n",Ans);
                break;
            }
            else {
                N=to_string(Ans);
                Ans=0;
            }
        }
    }
    return;
}

//int main() {
//    digitalRoot();
//    return 0;
//}
