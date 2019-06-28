//
//  Set_IuputOutput.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 05/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
// 열 개씩 끊어 출력하기

#include <stdio.h>
using namespace std;

int main(){
    char s[101];
    scanf("%s",s);
        for(int i=0; i<101; i++){
            if(s[i]=='\0') break;
            
            if(i!=0 && i%10==0) printf("\n");
            printf("%c",s[i]);
        }
    return 0;
}
//int main(){
//    string str;
//    while(!cin.eof()){
//        getline(cin,str);
//        cout << str << endl;
//    }
//    return 0;
//}
