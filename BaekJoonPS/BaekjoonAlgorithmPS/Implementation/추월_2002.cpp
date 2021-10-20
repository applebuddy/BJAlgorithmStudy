//
//  추월_2002.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 추월_2002
#if 0
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    map<string,int> MP;
    vector<string> A(N,"");
    vector<string> B(N,"");
    for(int i=0; i<N; i++) cin>>A[i];
    for(int i=0; i<N; i++) cin>>B[i];
    
    int i=0, j=0, Ans=0;
    while(j != B.size()) {
        if(A[i]==B[j]) i++;
        else {
            if(MP[A[i]]==1) {
                i++;
                continue;
            }
            else Ans++;
        }
        MP[B[j]]=1;
        j++;
    }
    printf("%d\n",Ans);
    return 0;
}
#endif
