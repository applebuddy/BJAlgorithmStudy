//
//  사라진페이지찾기_9437.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 사라진페이지찾기_9437
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> searchingMissingPage(const int &A, const int &B) {
        
        if(A/2>B) {
            if(B%2==0) return {A-(B-1),A-(B-2),B-1};
            else return {A-B,A-(B-1),B+1};
        }
        else {
            if(B%2==0) return {B-1,A-(B-1),A-(B-1)+1};
            else return {B+1,A-B,A-B+1};
        }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        int A,B;
        cin>>A;
        if(A==0) break;
        cin>>B;
        vector<int> Ans = searchingMissingPage(A,B);
        sort(Ans.begin(), Ans.end());
        for(int i=0; i<Ans.size(); i++) {
            printf("%d",Ans[i]);
            if(i!=Ans.size()-1) printf(" ");
        }
        puts("");
    }
    return 0;
}
#endif
