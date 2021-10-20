//
//  오븐시계_2525.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 13/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 오븐시계_2525

#if 0
#include <iostream>
using namespace std;

void theOvenClock() {
    int H,M; cin>>H>>M;
    int time; cin>>time;
    int subH = (M+time%60 >= 60 ? H+time/60+1 : H+time/60) % 24;
    int subM = (M+time%60) % 60;
    printf("%d %d\n",subH,subM);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0);
    theOvenClock();
    return 0;
}
#endif
