//
//  가장많은글자_1371.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가장많은글자_1371
#if 0
#include <iostream>
#include <vector>
using namespace std;
    
int main() {
    vector<int> AV(26,0);
    char C;
    // 문자열 특정 갯수까지 계속 입력받기 1)
    while(~scanf("%c", &C)) {
        if(C>='a' && C<='z') AV[C-'a']++;
    }
    
    // 문자열 특정 갯수까지 계속 입력받기 2)
//    while((C=getchar()) != EOF) {
//        if(C>='a' && C<='z') AV[C-'a']++;
//    }
    
    int max = 0;
    for(int i=0; i<26; i++) max = max<AV[i] ? AV[i] : max;
    for(int i=0; i<26; i++) if(max==AV[i]) printf("%c",i+'a');
    
    return 0;
}
#endif
