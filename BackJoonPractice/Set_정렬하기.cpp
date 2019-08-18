//
//  Set_정렬하기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 09/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//// ABC_3047
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    vector<int> v(3,0); string str;
//    cin>>v[0]>>v[1]>>v[2]; cin>>str;
//    sort(v.begin(), v.end());
//    for(int i=0; i<3; i++) printf("%d ",v[str[i]-'A']);
//    printf("\n");
//    return 0;
//}

//// 국영수_10825
//#include <iostream>
//#include <tuple>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//typedef tuple<string,int,int,int> Tuple;
//
//bool compare(const Tuple &a, const Tuple &b){
//    if(get<1>(a)<get<1>(b)) return false;
//    else if(get<1>(a)==get<1>(b)){
//        if(get<2>(a)>get<2>(b)) return false;
//        else if(get<2>(a)==get<2>(b)){
//            if(get<3>(a)<get<3>(b)) return false;
//            else if(get<3>(a)==get<3>(b)){
//                if(get<0>(a)>=get<0>(b)) return false;
//            }
//        }
//    }
//    return true;
//}
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int T; cin>>T;
//    vector<Tuple> tp;
//    while(T--){
//        string name; int ko,en,ma;
//        cin>>name>>ko>>en>>ma;
//        tp.push_back(make_tuple(name,ko,en,ma));
//    }
//    sort(tp.begin(), tp.end(), compare);
//    for(auto t : tp) printf("%s\n",get<0>(t).c_str());
//    return 0;
//}

//// 좌표 정렬하기 2_11651
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define endl "\n"
//using namespace std;
//typedef pair<int,int> Pair;
//
//bool compare(const Pair &a, const Pair &b){
//    if(a.second > b.second) return false;
//    else if(a.second == b.second){
//        if(a.first >= b.first) return false;
//    }
//    return true;
//}
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int N; cin>>N;
//    vector<Pair> vp; int x, y;
//    for(int i=0; i<N; i++){
//        cin>>x>>y;
//        vp.push_back(make_pair(x,y));
//    }
//    sort(vp.begin(),vp.end(),compare);
//    for(auto p : vp) printf("%d %d\n",p.first,p.second);
//}

//// 욕심쟁이 판다_1937 ★DP문제
//#include <iostream>
//#include <queue>
//#include <cmath>
//#include <string.h>
//#define endl "\n"
//#define MAX 500
//using namespace std;
//typedef pair<int,int> Pair;
//int Ans=0, N=0;
//int dp[MAX][MAX];
//int map[MAX][MAX];
//
//int tx[] = {0,0,-1,1};
//int ty[] = {-1,1,0,0};
//
//int DP(int x, int y){
//    if(dp[x][y]!=0) return dp[x][y];
//    dp[x][y]=1;
//    for(int i=0; i<4; i++){
//        int nx=x+tx[i];
//        int ny=y+ty[i];
//        if(nx<0 || ny<0 || nx>=N || ny>=N) continue;
//        if(map[nx][ny]<=map[x][y]) continue;
//        dp[x][y]=max(dp[x][y],DP(nx,ny)+1);
//    }
//    return dp[x][y];
//}
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin>>N;
//    for(int i=0; i<N; i++){
//        for(int j=0; j<N; j++){
//            cin>>map[i][j];
//        }
//    }
//    for(int i=0; i<N; i++){
//        for(int j=0; j<N; j++){
//            Ans=max(Ans,DP(i,j));
//        }
//    }
//    cout << Ans << endl;
//    return 0;
//}

//// 나이순 정렬_10814 * 튜플없이 다시 풀어보기
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <tuple>
//#define endl "\n"
//using namespace std;
//typedef tuple<int,string,int> Tuple;
//
//bool compare(const Tuple &a, const Tuple &b){
//    if(get<0>(a) > get<0>(b)) return false;
//    else{
//        if(get<0>(a) == get<0>(b)){
//            if(get<2>(a) >= get<2>(b)) return false;
//        }
//    }
//    return true;
//}
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int T; cin>>T;
//    vector<Tuple> member;
//    int age,seq=0; string name;
//    for(int i=0; i<T; i++){
//        cin>>age>>name;
//        member.push_back(make_tuple(age,name,seq));
//        seq++;
//    }
//    sort(member.begin(),member.end(),compare);
//    for(auto m : member) printf("%d %s\n",get<0>(m),get<1>(m).c_str());
//    return 0;
//}

//// K번째 수_11004
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//int main(){
//    int N,K; scanf("%d %d",&N,&K);
//    int Arr[N]; memset(Arr,0,sizeof(Arr));
//    for(int i=0; i<N; i++) scanf("%d",&Arr[i]);
//    sort(Arr,Arr+N);
//    printf("%d\n",Arr[K-1]);
//    return 0;
//}

//// 단어정렬_1181
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#define endl "\n"
//using namespace std;
//
//bool compare(string a, string b){
//    if(a.length()>b.length()) return false;
//    else if(a.length()!=b.length()) return true;
//    else {
//        if(a>=b) return false;
//        else return true;
//    }
//}
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int T; cin >> T;
//    vector<string> vec(T,"");
//    for(int i=0; i<T; i++) cin>>vec[i];
//    sort(vec.begin(), vec.end());
//    vec.erase(unique(vec.begin(),vec.end()),vec.end());
//    sort(vec.begin(), vec.end(), compare);
//    for(auto v : vec) cout << v << endl;
//    return 0;
//}

//// 소트인사이드_1427
//#include <stdio.h>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main(){
//    int n; scanf("%d",&n);
//    string s = to_string(n);
//    sort(s.begin(), s.end(), greater<int>());
//    printf("%s\n",s.c_str());
//    return 0;
//}

//// 보물_1026
//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//bool compare(const int &a, const int &b){
//    if(a>b) return true;
//    else return false;
//}
//int main(){
//    int T,ans=0;
//    scanf("%d",&T);
//    int maxN[T], minN[T];
//    memset(maxN,0,sizeof(maxN));
//    memset(minN,0,sizeof(minN));
//    for(int i=0; i<T; i++) scanf("%d",&maxN[i]);
//    for(int i=0; i<T; i++) scanf("%d",&minN[i]);
//    sort(maxN, maxN+T);
//    sort(minN, minN+T,compare);
//    for(int i=0; i<T; i++) ans+=minN[i]*maxN[i];
//    printf("%d\n",ans);
//    return 0;
//}

//// 좌표 정렬하기_11650
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef pair<int,int> Pair;
//bool compare(const Pair &a, const Pair &b){
//    if(a.first>b.first) return false;
//    else if(a.first==b.first){
//        if(a.second>b.second) return false;
//        else return true;
//    }else return true;
//}
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int T; cin>>T;
//    vector<Pair> vec(T,make_pair(0,0));
//    for(int i=0; i<(int)vec.size(); i++){
//        int a,b; cin>>a>>b;
//        vec[i].first=a; vec[i].second=b;
//    }
//    sort(vec.begin(),vec.end(),compare);
//    for(auto v : vec) printf("%d %d\n",v.first,v.second);
//    return 0;
//}

//// 통계학_2108
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main(){
//    int N;
//    scanf("%d",&N);
//    vector<int> v(N,0);
//    vector<int> cnt(8001,0);
//    int ans[4]={0,};
//    double sum=0;
//    for(int i=0; i<N; i++){
//        scanf("%d",&v[i]);
//        sum+=v[i];
//        cnt[v[i]+4000]++;
//    }
//
//    int c = *max_element(cnt.begin(), cnt.end()), flag=0;
//    for(int i=0; i<8001 && flag<2; i++){
//        if(c==cnt[i]){
//            ans[2]=i-4000;
//            flag++;
//        }
//    }
//    sort(v.begin(), v.end());
//    ans[0]=round(sum/(double)N);
//    ans[1]=v[N/2];
//    ans[3]=v[N-1]-v[0];
//    for(int i=0; i<4; i++){
//        printf("%d\n",ans[i]);
//    }
//    return 0;
//}

//// 카운팅정렬 사용하기
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main(){
//    int n,count=0;
//    scanf("%d",&n);
//    vector<int> v(10001,0); // 카운팅 벡터
//    for(int i=0; i<n; i++){
//        int a;
//        scanf("%d",&a);
//        v[a]++;
//    }
//    for(int i=0; i<=10000; i++){
//        while(v[i]>0){
//            count++;
//            printf("%d\n",i);
//            v[i]--;
//        }
//        if(count==n) break;
//    }
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//int a[1000000]={0,};
//using namespace std;
//int main(){
//    int n;
//    scanf("%d",&n);
//
//    for(int i=0; i<n; i++){
//        scanf("%d",&a[i]);
//    }
//    sort(a,a+n);
//    for(int i=0; i<n; i++){
//        printf("%d\n",a[i]);
//    }
//    return 0;
//}
