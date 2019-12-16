//
//  네번째점_3009.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> Pair;

void fourthDot() {
    vector<int> a(3,0);
    vector<int> b(3,0);
    Pair Ans;
    for(int i=0; i<3; i++) cin>>a[i]>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[0]==a[1]) Ans.first = a[2];
    else Ans.first = a[0];
    if(b[0]==b[1]) Ans.second = b[2];
    else Ans.second = b[0];
    printf("%d %d\n",Ans.first,Ans.second);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    fourthDot();
//    return 0;
//}
