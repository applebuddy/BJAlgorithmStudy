//
//  FBI_2857.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: FBI

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<int> Ans;
    for(int i=1; i<=5; i++) {
        string S;
        getline(cin, S);
        if(S.find("FBI") != string::npos) Ans.push_back(i);
    }
    
    if(Ans.size()==0) return !printf("HE GOT AWAY!\n");
    for(int i=0; i<Ans.size(); i++) {
        printf("%d",Ans[i]);
        if(i!=Ans.size()-1) printf(" ");
    }
    puts("");
    return 0;
}
#endif
