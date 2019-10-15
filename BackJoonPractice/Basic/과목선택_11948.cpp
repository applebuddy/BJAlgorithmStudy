//
//  과목선택_11948.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 15/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 과목선택_11948
#if 0
#include <iostream>
#include <cmath>
using namespace std;

void subjectSelection() {
    int A,B,C,D,E,F; cin>>A>>B>>C>>D>>E>>F;
    int sum = A+B+C+D+E+F;
    sum -= min(A,min(B,min(C,D)));
    sum -= min(E,F);
    printf("%d\n",sum);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    subjectSelection();
    return 0;
}
#endif
