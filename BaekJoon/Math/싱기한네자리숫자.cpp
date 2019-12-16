//
//  싱기한네자리숫자.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void printWeirdConvertedNumbers() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    for(int i=2992; i<=9999; i++) {
        vector<int> comp(3,0);
        int N=i;
        while(N>0) {
            comp[0]+=N%10;
            N/=10;
        }
        N=i;
        while(N>0) {
            comp[1]+=N%12;
            N/=12;
        }
        if(comp[0]!=comp[1]) continue;
        N=i;
        while(N>0) {
            comp[2]+=N%16;
            N/=16;
        }
        if(comp[0]==comp[2]) printf("%d\n",i);
    }
}

//int main() {
//    printWeirdConvertedNumbers();
//    return 0;
//}
