//
//  꿍의우주여행_9501.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 꿍의우주여행_9501
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N,D; cin>>N>>D;
        int Ans=0;
        for(int i=0; i<N; i++) {
            double v,f,c; cin>>v>>f>>c;
            int canD = (int)(v*(f/c));
            if(canD >= D) Ans++;
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
