//
//  저항_1076.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 저항_1076

#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef pair<int,long long> Pair;

void theResistances() {
    map<string,Pair> MP = {
        {"black",{0,1}},
        {"brown",{1,10}},
        {"red",{2,100}},
        {"orange",{3,1000}},
        {"yellow",{4,10000}},
        {"green",{5,100000}},
        {"blue",{6,1000000}},
        {"violet",{7,10000000}},
        {"grey",{8,100000000}},
        {"white",{9,1000000000}}};
    string a,b,c; cin>>a>>b>>c;
    long long Ans = (MP[a].first*10+MP[b].first)*MP[c].second;
    printf("%lld\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theResistances();
//    return 0;
//}
