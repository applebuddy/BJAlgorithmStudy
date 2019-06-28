//
//  6_greedy_30_10610.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 28/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#define endl "\n"
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    bool flag=false;
    string S,temp,ans="";
    int sum=0;
    cin >> S;
    sort(S.begin(), S.end(), greater<int>());
    do{
        if(S[S.length()-1]!='0'){
            ans=-1;
        }else{
            sum=0;
            temp = S;
            for(int i=0; i<temp.length()-1; i++){
                int sn = stoi(temp.substr(i,1));
                sum+=sn;
            }
            if(sum%3==0) {
                ans=S;
                flag=true;
                break;
            }
        }
        break;
    }while(prev_permutation(S.begin(), S.end()));
    if(flag==true) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}
