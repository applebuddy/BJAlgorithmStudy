//
//  5와6의차이_2864.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 5와 6의 차이 : String Basic Algorithm Problem

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void differencesBetweenFiveAndSix() {
    vector<int> AV;
    vector<int> BV;
    string s1,s2; cin>>s1>>s2;
    AV.push_back(stoi(s1));
    BV.push_back(stoi(s2));
    
    string maxStr=s1, minStr=s1;
    for(int i=0; i<s1.length(); i++) {
        if(s1[i]-'0'==5) {
            maxStr[i]='6';
        } else if(s1[i]-'0'==6) {
            minStr[i]='5';
        }
    }
    AV.push_back(stoi(minStr));
    AV.push_back(stoi(maxStr));
    
    maxStr=s2; minStr=s2;
    for(int i=0; i<s2.length(); i++) {
        if(s2[i]-'0'==5) {
            maxStr[i]='6';

        } else if(s2[i]-'0'==6) {
            minStr[i]='5';
        }
    }
    BV.push_back(stoi(minStr));
    BV.push_back(stoi(maxStr));
    
    sort(AV.begin(),AV.end());
    sort(BV.begin(),BV.end());

    printf("%d %d\n",AV[0]+BV[0],AV.back()+BV.back());
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    differencesBetweenFiveAndSix();
    return 0;
}
