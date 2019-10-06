//
//  미국스타일_2712.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 미국스타일_2712

#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;

void theAmericanStyle() {
    map<string,string> MP = {{"kg","lb"},{"l","g"},{"lb","kg"},{"g","l"}};
    int T; cin>>T;
    while(T--) {
        double N; string code;
        cin>>N>>code;
        if(code=="kg") N*=2.2046;
        else if(code=="g") N*=3.7854;
        else if(code=="l") N*=0.2642;
        else if(code=="lb") N*=0.4536;
        
        N=round(N*10000)/10000;
        printf("%.4lf %s\n",N,MP[code].c_str());
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0);
//    theAmericanStyle();
//    return 0;
//}
