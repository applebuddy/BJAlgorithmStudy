//
//  주몽_1940.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 주몽_1940
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T; cin>>T;
    vector<int> Item(T,0);
    int target, Ans=0; cin>>target;
    for(int i=0; i<T; i++) cin>>Item[i];
    sort(Item.begin(), Item.end());
    int j = (int)Item.size()-1;
    for(int i=0; i<j;) {
        if(Item[i]+Item[j]==target) {
            j--;
            i++;
            Ans++;
        } else if(Item[i]+Item[j] > target) {
            j--;
        } else {
            i++;
        }
    }
    printf("%d\n",Ans);
}
#endif
