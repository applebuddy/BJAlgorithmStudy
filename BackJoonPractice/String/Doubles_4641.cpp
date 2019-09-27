//
//  Doubles_4641.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Doubles_4641

//  2~15개의 서로 다른 자연수로 이루어진 리스트가 있을 때, 이들 중 리스트 안에 자신의 정확히 2배인 수가 있는 수의 개수를 구하여라.
//  예를 들어, 리스트가 "1 4 3 2 9 7 18 22"라면 2가 1의 2배, 4가 2의 2배, 18이 9의 2배이므로 답은 3이다.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> C(101,0);
void countDoubleNumbers() {
    vector<int> elements;
    int Ans=0;
    while(1) {
        int N; cin>>N;
        if(N==-1) break;
        
        if(N==0) {
            sort(elements.begin(), elements.end(), greater<int>());
            for(int i=0; i<(int)elements.size(); i++) {
                C[elements[i]]=1;
                if(C[elements[i]*2]==1) Ans++;
            }
            printf("%d\n",Ans);
            Ans=0;
            C.assign(101,0);
            elements.clear();
        }
        else elements.push_back(N);
    }
    return;
}

int main() {
    countDoubleNumbers();
    return 0;
}

