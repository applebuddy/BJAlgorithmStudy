////
////  GCD,LCD_2609.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 20/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 최대공약수
//// 24 18 => 18 6 => 6 0 => 최대공약수는 0
//int getGCD(int a, int b){
//    if(b==0) return a;
//    else return getGCD(b,a%b);
//}
//
//// 최소공배수
//int getLCD(const int &a, const int &b){
//    return a*b/getGCD(a,b);
//}
//
//int main(){
//    vector<int> answer;
//    int a,b;
//    scanf("%d %d",&a,&b);
//    answer.push_back(getGCD(a,b));
//    answer.push_back(getLCD(a,b));
//    
//    for(auto a : answer){
//        printf("%d\n",a);
//    }
//    return 0;
//}
