//
//  조세퍼스문제_1158.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 08/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 조세퍼스문제_1168

#include <iostream>
#include <vector>
using namespace std;

void theJoesaepers() {
    int A,B; cin>>A>>B;
    vector<int> Person(A,0);
    vector<int> Ans;
    for(int i=0; i<(int)Person.size(); i++) Person[i]=i+1;
    int idx=0;
    while(!Person.empty()) {
        idx+=B-1;
        idx%=(int)Person.size();
        Ans.push_back(Person[idx]);
        Person.erase(Person.begin()+idx,Person.begin()+idx+1);
    }
    
    printf("<");
    for(int i=0; i<(int)Ans.size(); i++) {
        printf("%d",Ans[i]);
        if(i!=(int)Ans.size()-1) printf(", ");
    }
    printf(">\n");
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theJoesaepers();
//    return 0;
//}
