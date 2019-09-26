//
//  제로_10773.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 제로_10773
/// MARK: 재현이는 잘못된 수를 부를 때마다 0을 외쳐서, 가장 최근에 재민이가 쓴 수를 지우게 시킨다.
//  => 재민이는 이렇게 모든 수를 받아 적은 후 그 수의 합을 알고 싶어 한다. 재민이를 도와주자!

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int zero() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    stack<int> STK;
    for(int i=0; i<N; i++) {
        int n;
        cin >> n;
        if(n==0 && !STK.empty()) STK.pop();
        else STK.push(n);
    }
    
    int Ans=0;
    while(!STK.empty()) {
        Ans+=STK.top();
        STK.pop();
    }
    return Ans;
}

//int main() {
//    int Ans = zero();
//    printf("%d\n",Ans);
//    return 0;
//}

