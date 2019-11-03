//
//  일반화학실험_4766.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 일반화학실험_4756
#if 0
#include <iostream>
using namespace std;

int main() {
    double from; cin>>from;
    while(1) {
        double to; cin>>to;
        if(to==999) break;
        printf("%.2lf\n",to-from);
        from = to;
    }
    return 0;
}
#endif
