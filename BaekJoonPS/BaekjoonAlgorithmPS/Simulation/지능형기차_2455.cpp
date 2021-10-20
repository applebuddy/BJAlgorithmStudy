//
//  지금형기차_2455.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 지능형기차_2455

#include <iostream>
using namespace std;

void intelligentTrain() {
    int person=0;
    int Ans=0;
    for(int i=0; i<4; i++) {
        int l,e; cin>>l>>e;
        person-=l;
        person+=e;
        Ans = Ans < person ? person : Ans;
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    intelligentTrain();
//    return 0;
//}
