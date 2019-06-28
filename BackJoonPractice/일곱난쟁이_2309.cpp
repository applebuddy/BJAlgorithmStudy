//
//  일곱난쟁이_2309.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 21/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> nan(9,0);
int main(){
    int max=0;
    for(int i=0; i<9; i++){
        scanf("%d",&nan[i]);
        max+=nan[i];
    }
    
    vector<int>::iterator iter = nan.begin();
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(max-nan[i]-nan[j]==100){
                nan.erase(iter+i);
                nan.erase(iter+j-1);
            }
        }
    }
    sort(nan.begin(), nan.end());
    for(auto n : nan){
        cout << n << " ";
    }
    
    return 0;
}
