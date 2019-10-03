//
//  크로아티아알파벳_2941.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 크로아티아 알파벳_2941

#include <iostream>
#include <string>
#define MAX 8
using namespace std;

string croAlpha[] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

void croatiaAlphabet() {
    string S; cin>>S;
    int Ans=0;
    bool flag;
    while(S.length()!=0) {
        flag = false;
        for(int j=0; j<MAX; j++) {
            string temp = S.substr(0,croAlpha[j].length());
            if(croAlpha[j]==temp) {
                Ans++;
                S = S.substr(temp.length());
                flag = true;
                break;
            }
        }
        
        if(!flag) {
            S = S.substr(1);
            Ans++;
        }
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    croatiaAlphabet();
//    return 0;
//}
