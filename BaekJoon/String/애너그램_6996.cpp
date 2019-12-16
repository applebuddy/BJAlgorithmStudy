//
//  애너그램_6996.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 애너그램_6996
#if 0
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        map<char,int> MP;
        string S1,S2; cin>>S1>>S2;
        bool flag = true;
        for(int i=0; i<S2.length(); i++) MP[S2[i]]++;
        for(int i=0; i<S1.length(); i++)
        {
            if(MP[S1[i]]==0 || S1.length() != S2.length())
            {
                flag = false;
                break;
            }
            MP[S1[i]]--;
        }
        
        if(!flag) printf("%s & %s are NOT anagrams.\n",S1.c_str(), S2.c_str());
        else printf("%s & %s are anagrams.\n",S1.c_str(), S2.c_str());
    }
    
    return 0;
}
#endif
