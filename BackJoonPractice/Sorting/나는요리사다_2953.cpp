//
//  나는요리사다_2953.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 나는요리사다_2953

#include <iostream>
using namespace std;

void imTheChef() {
    
    int Ans[2] = {0,0};
    for(int i=0; i<5; i++) {
        int sum=0;
        for(int j=0; j<4; j++) {
            int n; cin>>n;
            sum+=n;
        }
        
        if(Ans[1]<sum) {
            Ans[0]=i+1;
            Ans[1]=sum;
        }
    }
    printf("%d %d\n",Ans[0],Ans[1]);
    
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    imTheChef();
//    return 0;
//}
