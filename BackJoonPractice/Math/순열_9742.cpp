//
//  순열_9742.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 순열_9742

#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

void thePermutation() {
    char str[11]; memset(str,' ',sizeof(str));
    int pos;
    
    while(scanf("%s %d",str,&pos)!=EOF) {
        string S(str);
        sort(S.begin(),S.end());
        int cnt=1;
        bool flag=false;
        printf("%s %d = ",S.c_str(),pos);
        do {
            if(cnt==pos) {
                printf("%s\n",S.c_str());
                flag=true;
                break;
            }
            cnt++;

        }while(next_permutation(S.begin(),S.end()));
        if(!flag) printf("No permutation\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    thePermutation();
//    return 0;
//}
