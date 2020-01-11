//
//  카드놀이_2511.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/11.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 카드놀이_2511 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<int> A(10,0);
    vector<int> B(10,0);
    int scoreA = 0, scoreB = 0;
    int lastWinner = -1;
    for(int i=0; i<10; i++) cin>>A[i];
    for(int i=0; i<10; i++) cin>>B[i];
    for(int i=0; i<10; i++) {
        if(A[i] > B[i]) {
            scoreA += 3;
            lastWinner = 0;
        }
        else if(A[i] < B[i]) {
            scoreB += 3;
            lastWinner = 1;
        }
        else {
            scoreA += 1;
            scoreB += 1;
        }
    }
    
    printf("%d %d\n",scoreA, scoreB);
    if(scoreA > scoreB) printf("A\n");
    else if(scoreA < scoreB) printf("B\n");
    else {
        if(lastWinner == -1) printf("D\n");
        else printf("%s\n",lastWinner==0 ? "A" : "B");
    }
    
    return 0;
}
#endif
