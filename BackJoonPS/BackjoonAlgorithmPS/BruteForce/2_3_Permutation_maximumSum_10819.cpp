////
////  Permutation_maximumSum_10819.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 21/04/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int calculation(vector<int> &a){
//    
//    int sum = 0;
//    for(int i=1; i<a.size(); i++){
//        sum += abs(a[i]-a[i-1]);
//    }
//    
//    return sum;
//}
//
//int main(){
//    
//    int n = 0, answer = 0;
//    cin >> n;
//    vector<int> a(n);
//    
//    // 순열의 요소를 입력해준다.
//    for(int i=0; i<a.size(); i++){
//        cin >> a[i];
//    }
//    
//    // 순열을 오름차순으로 정렬한다.
//    sort(a.begin(), a.end());
//    
//    // 정의된 식의 값 합이 가장 큰 경우를 찾는다.
//    do {
//        int sum = calculation(a);
//        answer = max(answer,sum); // 각 수열의 결과값과 비교해 더 큰 수를 저장해준다.
//    }while(next_permutation(a.begin(),a.end()));
//    
//    // 각 수열별 정의된 값의 결과 중 가장 큰 값(answer)를 출력한다.
//    cout << answer << "\n";
//    
//    return 0;
//}
