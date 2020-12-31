//
//  카드셋트_11507.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 카드셋트_11507

#if 0
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int rP=0,rK=0,rH=0,rT=0;
    map<string,int> MP;
    string S; cin>>S;
    for(int i=0; i<S.length(); i+=3) {
        string temp = S.substr(i,3);
        if(MP[temp]!=0) return !printf("GRESKA\n");
        if(temp.front() == 'P') rP++;
        else if(temp.front() == 'K') rK++;
        else if(temp.front() == 'H') rH++;
        else if(temp.front() == 'T') rT++;
        MP[temp]++;
    }
    
    printf("%d %d %d %d\n",13-rP,13-rK,13-rH,13-rT);
    return 0;
}
#endif
