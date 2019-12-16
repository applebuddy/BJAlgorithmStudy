//
//  히스토그램에서가장큰직사각형_6549.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 히스토그램에서 가장 큰 직사각형_6549
// * 33% 시간초과 답안
#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    while(1) {
        int T; cin>>T;
        if(T==0) break;
        
        vector<long long> V(T,0);
        for(int i=0; i<T; i++) cin>>V[i];
        long long Ans = 0;
        for(int i=0; i<V.size(); i++) {
            int len = 1;
            for(int j=i-1; j>=0; j--) {
                if(V[i] <= V[j]) len++;
                else break;
            }
            
            for(int j=i+1; j<V.size(); j++) {
                if(V[i] <= V[j]) len++;
                else break;
            }
            Ans = Ans < V[i]*len ? V[i]*len : Ans;
        }
        
        printf("%lld\n",Ans);
    }
    return 0;
}
#endif
