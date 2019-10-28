////
////  Prime_1929_Erratostenes.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 17/04/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//// MARK:- 에라토스테네스의 체 알고리즘을 사용해본다. 복잡도는 약 "NlogNllogN" 이다.
//
//#include <iostream>
//
//using namespace std;
//
//int main(){
//
//    int M, N;
//    
//    scanf("%d %d", &M, &N);
//
//    bool *arr = new bool[N+1]; //N만큼의 배열을 만들어준다. false는 소수, true는 소수아님을 의미.
//    fill_n(arr,N+1,false);
//    arr[1] = true;  // 1은 소수가 아니므로 true로 제외시켜버린다.
//    
//    for(int i=2; i<=N; i++){
//        if(arr[i]==false)
//            for(int j=i*2; j<=N; j+=i){
//                arr[j] = true;
//            }
//    }
//    
//    for(int i=M; i<=N; i++){
//        if(arr[i] == false){
//            printf("%d\n",i);
//        }
//    }
//    
//    delete []arr;
//    
//    return 0;
//}
