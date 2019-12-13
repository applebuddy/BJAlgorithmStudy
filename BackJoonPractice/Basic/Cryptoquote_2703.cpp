//
//  Cryptoquote_2703.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: Cryptoquote_2730

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    string S,C;
    cin.ignore();
    while(T--) {
        getline(cin, S);
        getline(cin, C);
        for(int i=0; i<S.length(); i++) if(S[i]!=' ')S[i] = C[S[i]-'A'];
        printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
