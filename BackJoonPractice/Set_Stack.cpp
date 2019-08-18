//
//  Set_Stack.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 30/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//// 스택_10828
//#include <stdio.h>
//#include <stack>
//using namespace std;
//int main(){
//    int T;
//    scanf("%d",&T);
//    stack<int> stk;
//    while(T--){
//        char c[6]="";
//        scanf("%s",c);
//        switch (c[0]) {
//            case 'p':
//                if(c[1]=='u'){
//                    int n; scanf("%d",&n);
//                    stk.push(n);
//                }else{
//                    if(!stk.empty()){
//                        printf("%d\n",stk.top());
//                        stk.pop();
//                    }else printf("%d\n",-1);
//                }
//                break;
//            case 't':
//                if(!stk.empty()) printf("%d\n",stk.top());
//                else printf("%d\n",-1);
//                break;
//            case 's':
//                printf("%d\n",(int)stk.size());
//                break;
//            case 'e':
//                printf("%d\n",stk.empty());
//                break;
//            default:
//                break;
//        }
//    }
//    return 0;
//}
