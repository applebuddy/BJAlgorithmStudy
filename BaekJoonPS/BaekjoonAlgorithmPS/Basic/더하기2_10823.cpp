//
//  더하기2_10823.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 더하기2_10823

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void thePlusTwo() {
    char S[10001] = {NULL};
    char s[501];
    char *tok;
    long long int Ans=0;
    
    while(fgets(s, sizeof(s), stdin)) {
        s[strlen(s)-1]='\0';
        strcat(S,s);
    }
    
    tok = strtok(S, ",");
    while(tok!=NULL) {
        Ans += stoi(tok);
        tok = strtok(NULL, ",");
    }
    
    printf("%lld\n",Ans);
    return;
}

//int main() {
//    thePlusTwo();
//    return 0;
//}
