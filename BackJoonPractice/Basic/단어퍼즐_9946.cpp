//
//  단어퍼즐_9946.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 쿠폰_10179

#if 0
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int cnt=1;
    while(1) {
        string A,B; cin>>A>>B;
        bool flag = false;
        unordered_map<char,int> UMP;
        if(A=="END" && A==B) break;
        printf("Case %d: ",cnt);
        for(auto s: A) UMP[s]++;
        for(auto s: B) UMP[s]--;
        for(auto m: UMP)
            if(m.second!=0) {
            flag = true;
            break;
        }
        printf("%s\n", flag ? "different" : "same");
        cnt++;
    }
    return 0;
}
#endif
