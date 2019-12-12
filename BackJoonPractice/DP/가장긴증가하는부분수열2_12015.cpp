//
//  가장긴증가하는부분수열2_12015.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 가장 긴 증가하는 부분수열2 12015

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> A;
    vector<int>::iterator iter = A.begin();
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        iter = lower_bound(A.begin(), A.end(), num);
        if(iter == A.end()) A.push_back(num);
        else A[iter-A.begin()] = num;
    }
    
    printf("%d\n",(int)A.size());
    
    return 0;
}
