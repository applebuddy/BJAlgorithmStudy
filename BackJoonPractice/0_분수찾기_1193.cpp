//
//  0_분수찾기_1193.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 26/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#define endl "\n"
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,sum=1,count=1;
    int son=1, fat=1;
    int valSum=0;
    cin >> N;
    
        while(1){
            
            if(sum>=N) {
                break;
            }else{
                count++;
                sum+=count;
            }
        }
        valSum=count+1;
        
        // sum : 1+2+3+...+count의 합
        // count : 현재 위치에서의 최대 나올수있는 값
        // valSum : 분지+분모의 최댓값
        
        int key = sum-N;
        if(count%2){
            fat= count-key;
            son= valSum-fat;
        }else{
            son= count-key;
            fat= valSum-son;
        }
        cout << son << "/" << fat << endl;

    return 0;
}
