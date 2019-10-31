//
//  삼각형분류_9366.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
/// MARK: - 삼각형분류_9366
#if 0
#include <iostream>
#include <map>
using namespace std;

int main() {
    
    int T; cin>>T;
    for(int i=0; i<T; i++) {
        map<int, int, less<int>> UMP;
        int A,B,C; cin>>A>>B>>C;
        printf("Case #%d: ",i+1);
        UMP[A]++; UMP[B]++; UMP[C]++;
        if(UMP.size()==1) printf("equilateral\n");
        else if(UMP.size()==2) {
            int mxV = max(A,max(B,C));
            if(A+B+C-mxV <= mxV) printf("invalid!\n");
            else printf("isosceles\n");
        }
        else {
            int mxV=0;
            int sum=0;
            for(auto m: UMP) {
                mxV = m.first>mxV ? m.first : mxV;
                sum+=m.first;
            }
            if(sum-mxV<=mxV) printf("invalid!\n");
            else printf("scalene\n");
        }
    }
    
    return 0;
}
#endif
