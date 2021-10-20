//
//  알파벳전부쓰기_11091.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 알파벳 전부 쓰기_11091

#include <iostream>
#include <string>
using namespace std;

void writingWholeAlphabet() {
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        string S; getline(cin,S,'\n');
        int arr[26]={0,};
        int cnt=0;
        for(int i=0; i<S.length(); i++) {
            if(S[i]<97) S[i]=tolower(S[i]);
            if(arr[S[i]-'a']==0 && S[i]-'a'<=25 && S[i]-'a'>=0) {
                cnt++;
                arr[S[i]-'a']++;
            }
        }
        
        if(cnt==26) printf("pangram\n");
        else {
            printf("missing ");
            for(int i=0; i<26; i++) {
                char ch = char(i+97);
                if(arr[i]==0) printf("%c",ch);
            }
            printf("\n");
        }
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    writingWholeAlphabet();
//    return 0;
//}
