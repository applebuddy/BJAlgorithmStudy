//
//  아시아정보올림피아드_2535.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 아시아 정보올림피아드_2535

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Candidate {
public:
    int nation;
    int number;
    int score;
    Candidate(int nat, int num, int s) {
        this->nation = nat;
        this->number = num;
        this->score = s;
    }
};

void asiaInformationOlympiad() {
    int N; cin>>N;
    vector<Candidate> CV(N,Candidate(0,0,0));
    for(int i=0; i<N; i++) cin>>CV[i].nation>>CV[i].number>>CV[i].score;
    sort(CV.begin(),CV.end(),[](const Candidate &a, const Candidate &b) {
        return a.score > b.score;
    });
    
    vector<int> C(N,0);
    int cnt=0;
    for(int i=0; i<N; i++) {
        if(cnt>=3) break;
        if(C[CV[i].nation]<2) {
            C[CV[i].nation]++;
            printf("%d %d\n",CV[i].nation,CV[i].number);
            cnt++;
        } else continue;
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    asiaInformationOlympiad();
//    return 0;
//}
