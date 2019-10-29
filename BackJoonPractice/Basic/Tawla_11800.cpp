//
//  Tawla_11800.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Tawla_11800
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> DV = {"Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};
vector<string> SDV = {"Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};

void Tawla() {
    int T; cin>>T;
       for(int i=0; i<T; i++) {
           int A,B; cin>>A>>B;
           printf("Case %d: ",i+1);
           if(A==B) printf("%s\n",SDV[A-1].c_str());
           else {
               if(A<B) swap(A,B);
               if(A==6 && B==5) printf("Sheesh Beesh\n");
               else printf("%s %s\n",DV[A-1].c_str(),DV[B-1].c_str());
           }
       }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    Tawla();
    return 0;
}
#endif
