//
//  줄번호_4470.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 줄번호_4470

#if 0
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    cin.ignore();
    vector<string> Ans(N);
    for(int i=1; i<=N; i++) {
        getline(cin, Ans[i-1]);
        Ans[i-1] = to_string(i) + ". " + Ans[i-1];
    }
    
    for(int i=0; i<Ans.size(); i++) printf("%s\n",Ans[i].c_str());
    return 0;
}
#endif
