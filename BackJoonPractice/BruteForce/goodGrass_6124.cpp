//
//  goodGrass_6124.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Good Grass_6124

#include <vector>
#include <iostream>
using namespace std;

void goodGrass() {
    
    int N,M; cin>>N>>M;
    vector<int> Ans(3,0);
    vector<vector<int>> arr(N,vector<int>(M,0));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin>>arr[i][j];
    
    for(int i=1; i<N-1; i++) {
        for(int j=1; j<M-1; j++) {
            int sum=0;
            for(int a=i-1; a<=i+1; a++) {
                for(int b=j-1; b<=j+1; b++) {
                    sum+=arr[a][b];
                }
            }
            if(Ans[0] < sum) {
                Ans[0]=sum;
                Ans[1]=i;
                Ans[2]=j;
            }
        }
    }
    
    printf("%d\n",Ans[0]);
    printf("%d %d",Ans[1],Ans[2]);
    
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    goodGrass();
//    return 0;
//}
