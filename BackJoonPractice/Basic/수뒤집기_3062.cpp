//
//  수뒤집기_3062.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 수뒤집기_3062
#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        int sum=0;
        string S = to_string(N);
        string pelindromS = S;
        reverse(pelindromS.begin(), pelindromS.end());
        sum = stoi(S) + stoi(pelindromS);
        
        string sumStr = to_string(sum);
        string pelindromStr = sumStr;
        reverse(pelindromStr.begin(), pelindromStr.end());
        printf("%s\n",sumStr!=pelindromStr ? "NO" : "YES");
    }
    return 0;
}
#endif
