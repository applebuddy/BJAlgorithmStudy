//
//  Permutation_allPermutation_10974.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 21/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
// MARK:- 10974_모든순열_whole Permutation
// N이 주어졌을 때, 1부터 N까지의 수로 이루어진 순열을 사전순으로 출력하는 프로그램을 작성하시오.
// 첫째 줄에 N(1 ≤ N ≤ 8)이 주어진다.
// 첫째 줄부터 N!개의 줄에 걸쳐서 모든 순열을 사전순으로 출력한다.

// ★ 모든 수열을 구하는데 드는 복잡도 == O(N*N!)
//   =>순열은 10 이하의 N개일경우가 아니면 과부하가 커진다..(1초안에 구하기 힘들어짐)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    int n=0;
    cin >> n;
    vector<int> a(n);
    
    
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    
    do{
        for(int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }while(next_permutation(a.begin(),a.end()));
    // ★ do-while문은 이 whole Permutation을 구할때만 사용하는 편이다.
    
    return 0;
}
