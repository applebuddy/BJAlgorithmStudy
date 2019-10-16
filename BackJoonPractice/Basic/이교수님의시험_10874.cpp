//
//  이교수님의시험_10874.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 이교수님의 시험_10874
#if 0
#include <iostream>
#include <vector>
using namespace std;

void examWithProfessorLee() {
    int N; cin>>N;
    int sol[] = {1,2,3,4,5,1,2,3,4,5};
    vector<int> Ans;
    for(int i=0; i<N; i++) {
        bool flag = true;
        for(int j=0; j<10; j++) {
            int num; cin>>num;
            if(sol[j]!=num) flag = false;
        }
        if(flag==true) Ans.push_back(i+1);
    }
    for(auto v: Ans) printf("%d\n",v);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    examWithProfessorLee();
    return 0;
}
#endif
