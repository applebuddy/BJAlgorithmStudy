//
//  Strfry_11328.cpp
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/21.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <string>
#define endl '\n';
using namespace std;

int main() {
    int N; cin>>N;
    while(N--) {
        string a, b; cin>>a>>b;
        bool flag = true;
        int dic[26] = {0,};
        for(int i=0; i<(int)a.length(); i++) dic[a[i]-'a']++;
        for(int i=0; i<(int)b.length(); i++) dic[b[i]-'a']--;
        for(int i=0; i<26; i++) {
            if(dic[i] != 0) {
                flag = false;
                break;
            }
        }
        
        printf("%s\n", flag ? "Possible" : "Impossible");
    }
}
#endif
