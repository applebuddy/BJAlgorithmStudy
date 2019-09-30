//
//  TheHardestProblemEver.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - The Hardest Problem Ever_9971 : String Algorithm Problem

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void theHardestProblemEver() {
    while(1) {
        string str; cin>>str;
        if(str=="START") {
            string cipher;
            while(1) {
                getline(cin, cipher, '\n');
                getline(cin, cipher, '\n');
                for(int i=0; i<cipher.length(); i++) {
                    if(cipher[i]>=65 && cipher[i]<=90) {
                        if(cipher[i]-5 < 65) cipher[i]=90-(65-cipher[i]+5)+1;
                        else cipher[i]-=5;
                    }
                }
                printf("%s\n",cipher.c_str());
                cin>>str;
                if(str=="END") break;
                else continue;
            }
        } else if("ENDOFINPUT") break;
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theHardestProblemEver();
//    return 0;
//}
