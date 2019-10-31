//
//  대칭차집합_1269.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 대칭차집합_1269

#if 0
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

/// MARK: Algorithm Header 사용 통과답안)
int main() {
    int A,B; cin>>A>>B;
    set<int> setA;
    set<int> setB;
    for(int i=0; i<A; i++) {
        int num; cin>>num;
        setA.insert(num);
    }
    
    for(int j=0; j<B; j++) {
        int num; cin>>num;
        setB.insert(num);
    }
    
    vector<int> V;
    vector<int> V2;

    set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), back_inserter(V));
    set_difference(setB.begin(), setB.end(), setA.begin(), setA.end(), back_inserter(V2));
    printf("%d\n",(int)(V.size()+V2.size()));
    return 0;
}
#endif

///// MARK: Algorithm Header 미사용 통과답안)
//int na, nb,temp,common;
//vector<int> a, b;
//int main() {
//    cin.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//    cin >> na >> nb;
//    for (int i = 0; i < na; i++) {
//        cin >> temp;
//        a.push_back(temp);
//    }
//    for (int i = 0; i < nb; i++) {
//        cin >> temp;
//        b.push_back(temp);
//    }
//    sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//
//    int aidx = 0, bidx = 0;
//    while (aidx < na && bidx < nb) {
//        if (a[aidx] == b[bidx]) {
//            common++;
//            aidx++; bidx++;
//        }
//        else if (a[aidx] > b[bidx]) bidx++;
//        else aidx++;
//    }
//    cout << na + nb - 2 * common;
//}
