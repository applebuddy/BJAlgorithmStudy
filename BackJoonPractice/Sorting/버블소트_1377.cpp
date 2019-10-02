//
//  버블소트_1377.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: -
//. * 시간초과 답안

//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    
//    int n; cin>>n;
//    vector<int> a(n+1,0);
//    for(int i=1; i<n+1; i++) cin>>a[i];
//    bool change = false;
//    
//    for (int i=1; i<=n+1; i++) {
//        change = false;
//        for (int j=1; j<=n-i; j++) {
//            if (a[j] > a[j+1]) {
//                change = true;
//                swap(a[j], a[j+1]);
//            }
//        }
//        if (change == false) {
//            cout << i << '\n';
//            break;
//        }
//    }
//    return 0;
//}
