//
//  Set_문자열다루기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 06/07/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//// 그룹단어체커_1316
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//bool checkString(string s){
//    int chk[26]={0,};
//    for(int i=0; i<s.length(); i++){
//        if(i==0) chk[s[i]-97]++;
//        else{
//            if(s[i-1]==s[i]) continue;
//            if(chk[s[i]-97]==1) return false;
//            else chk[s[i]-97]++;
//        }
//    }
//    return true;
//}
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int T,Ans=0; cin>>T;
//    while(T--){
//        string t; cin>>t;
//        if(checkString(t)) Ans++;
//    }
//    printf("%d\n",Ans);
//    return 0;
//}

//// 다이얼_5622
//#include <iostream>
//#include <string>
//#include <vector>
//#define endl "\n"
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    char dial[8]={'C','F','I','L','O','S','V','Z'};
//    int Ans=0;
//    string str; cin>>str;
//    for(int i=0; i<(int)str.length(); i++){
//        for(int j=0; j<8; j++){
//            if(str[i]<=dial[j]){
//                Ans+=(3+j);
//                break;
//            }
//        }
//    }
//    cout << Ans << endl;
//    return 0;
//}

//// 상수_2908
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    vector<string> sv(2,"");
//    for(int i=0; i<2; i++){
//        cin>>sv[i];
//        reverse(sv[i].begin(), sv[i].end());
//    }
//    sort(sv.begin(), sv.end(), greater<string>());
//    printf("%s\n",sv[0].c_str());
//    return 0;
//}

//// 단어공부_1157
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef pair<int,int> Pair;
//
//bool compare(const Pair &a, const Pair &b){
//    if(a.first <= b.first) return false;
//    else return true;
//}
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    vector<Pair> cnt(26,make_pair(0,0)); string str;
//    for(int i=0; i<cnt.size(); i++) cnt[i].second=i;
//    cin >> str;
//    for(int i=0; i<str.length(); i++){
//        str[i]=tolower(str[i]);
//        int index=(int)str[i]-97;
//        cnt[index].first++;
//    }
//    sort(cnt.begin(), cnt.end(), compare);
//    if(cnt[0].first==cnt[1].first) printf("?\n");
//    else printf("%c\n",(char)(cnt[0].second+65));
//    return 0;
//}

//// 알파벳 찾기_10809
//#include <iostream>
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int arr[26]; fill_n(arr,26,-1);
//    string str; cin>>str;
//    for(int i=0; i<str.length(); i++){
//        int index=(int)str[i]-97;
//        if(arr[index]==-1) arr[index]=i;
//    }
//    for(auto a : arr) printf("%d ",a);
//    printf("\n");
//    return 0;
//}

//// 아스키코드_11654
//#include <stdio.h>
//int main(){
//    char c;
//    scanf("%c",&c); printf("%d\n",c);
//    return 0;
//}
