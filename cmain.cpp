////
////  main.cpp
////  BackJoonPractice
////
////  Created by MinKyeongTae on 2020/02/18.
////  Copyright © 2020 Min Kyeong Tae. All rights reserved.
////
//

//#include <iostream>
//#include <string>
//#include <deque>
//using namespace std;
//
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int T; cin>>T;
//    
//    while(T--) {
//        deque<string> DQ;
//        string code; cin>>code;
//        int len; cin>>len;
//        string arr; cin>>arr;
//        string temp = "";
//        for(int i=0; i<arr.length(); i++) {
//            if(i==0 || i==arr.length()-1) continue;
//            if(arr[i] == ',') {
//                DQ.push_back(temp);
//                temp = "";
//            } else temp += arr[i];
//        }
//        if(temp != "") DQ.push_back(temp);
//        
//        bool isReverse = false;
//        bool isError = false;
//        for(int i=0; i<code.length(); i++) {
//            if(code[i]=='D') {
//                if(DQ.empty()) {
//                    isError = true;
//                    break;
//                }
//                if(isReverse) DQ.pop_back();
//                else DQ.pop_front();
//            } else {
//                isReverse = !isReverse;
//            }
//        }
//        
//        if(isError) printf("error\n");
//        else {
//            string Ans = "[";
//            while(!DQ.empty()) {
//                if(isReverse) {
//                    Ans += DQ.back();
//                    DQ.pop_back();
//                } else {
//                    Ans += DQ.front();
//                    DQ.pop_front();
//                }
//                if(!DQ.empty()) Ans += ',';
//            }
//            Ans += "]";
//            printf("%s\n",Ans.c_str());
//        }
//    }
//    return 0;
//}
