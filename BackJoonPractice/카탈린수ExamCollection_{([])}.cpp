//
//  카탈린수Exam.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 11/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int arr[31];
char c[100], d[100];
stack<char> stk;

int getScore(const string &s){
    int cnt=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='['){
            stk.push(s[i]);
            cnt++;
        }
        
        else if(s[i]==')' || s[i]==']'){
            if(stk.empty() || c[stk.top()]!=s[i]) return 0;
            arr[cnt] += d[s[i]]*max(1,arr[cnt+1]);
            arr[cnt+1]=0;
            stk.pop();
            cnt--;
        }
    }
    return arr[1];
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(arr,0,sizeof(arr));
    string s;
    int ans=0;
    
    c['(']=')'; c['[']=']';
    d[')']=2; d[']']=3;
    
    cin >> s;
    ans = getScore(s);
    if(stk.empty()) cout << ans << "\n";
    else cout << 0 << "\n";
    return 0;
}




//// 주어진 string 제대로 닫혔는지 확인하기 응용문제({,(,[)
//#include <iostream>
//#include <stack>
//using namespace std;
//
//stack<char> stk;
//bool checkBrace(const string &s){
//    if(!(s[0]=='(' || s[0]=='{' || s[0]=='[')) return false;
//
//    for(int i=0; i<s.length(); i++){
//
//        switch(s[i]){
//            case '(':
//                stk.push(')');
//                break;
//            case '{':
//                stk.push('}');
//                break;
//            case '[':
//                stk.push(']');
//                break;
//            case ')': case '}': case ']':
//
//                if(!stk.empty()){
//                    if(stk.top()!=s[i]) return false;
//                    else stk.pop();
//                }else return false;
//                break;
//            default:
//                break;
//        }
//    }
//
//    if(stk.empty()) return true;
//    else return false;
//}
//
//int main(){
//
//    bool ans;
//    string s;
//    while(1){
//        while(!stk.empty()) stk.pop();
//
//        cin >> s;
//        if(s=="0") break;
//        ans = checkBrace(s);
//        printf(ans ? "TRUE\n" : "FALSE\n");
//    }
//
//    return 0;
//}

//// {{{}}} {{}{}} {{}}{} {}{}{}
//// ★ () 괄호닫기 경우의 수 출력하기
//#include <stdio.h>
//
//char s[1000];
//void go(int idx, int o, int c){
//    if(o==0){
//        while(c--){
//            s[idx++]='}';
//        }
//        printf("%s\n",s);
//        return;
//    }
//
//    s[idx]='{';
//    go(idx+1,o-1,c);
//
//    if(o<c){
//        s[idx]='}';
//        go(idx+1,o,c-1);
//    }
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    go(0, n, n);
//    return 0;
//}
//
