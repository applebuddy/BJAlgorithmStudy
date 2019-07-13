//
//  Set_구현.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 24/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.

//// POT_11772
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int N,Ans=0; cin>>N;
//    while(N--){
//        int n; cin>>n;
//        int t=n%10;
//        n/=10;
//        Ans+=pow(n,t);
//    }
//    printf("%d\n",Ans);
//    return 0;
//}

//// 캔디구매_2909
//#include <stdio.h>
//#include <cmath>
//int main(){
//    double N; int St; scanf("%lf %d",&N,&St);
//    printf("%d\n",(int)(round(N/pow(10,St))*pow(10,St)));
//    return 0;
//}

//// 서버_10409
//#include <stdio.h>
//int main(){
//    int N,T,sum=0,Ans=0; scanf("%d %d",&N,&T);
//    while(N--){
//        int t;
//        scanf("%d",&t);
//        sum+=t;
//        if(sum>T) break;
//        else Ans++;
//    } printf("%d\n",Ans);
//    return 0;
//}

//// Starman_12791
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//vector<pair<int,string>> pv={{1967,"DavidBowie"},{1969,"SpaceOddity"},{1970,"TheManWhoSoldTheWorld"},{1971,"HunkyDory"},{1972,"TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"},{1973,"AladdinSane"},{1973,"PinUps"},{1974,"DiamondDogs"},{1975,"YoungAmericans"},{1976,"StationToStation"},{1977,"Low"},{1977,"Heroes"},{1979,"Lodger"},{1980,"ScaryMonstersAndSuperCreeps"},{1983,"LetsDance"},{1984,"Tonight"},{1987,"NeverLetMeDown"},{1993,"BlackTieWhiteNoise"},{1995,"1.Outside"},{1997,"Earthling"},{1999,"Hours"},{2002,"Heathen"},{2003,"Reality"},{2013,"TheNextDay"},{2016,"BlackStar"}};
//int main(){
//    int T; scanf("%d",&T);
//    while(T--){
//        int First,Last; scanf("%d %d",&First,&Last);
//        vector<pair<int,string>> Ans; int cnt=0;
//        for(auto v : pv){
//            if(First<=v.first && v.first<=Last) {
//                cnt++;
//                Ans.push_back({v.first,v.second});
//            }
//        } printf("%d\n",cnt);
//        for(auto v : Ans) printf("%d %s\n",v.first,v.second.c_str());
//    }
//    return 0;
//}

//// 수빈이와 수열_10539
//#include <stdio.h>
//using namespace std;
//int Ans[101]={0,};
//int Res[101]={0,};
//int main(){
//    int T; scanf("%d",&T);
//    for(int i=1; i<T+1; i++) scanf("%d",&Ans[i]);
//    Res[1]=Ans[1];
//    for(int i=2; i<=T; i++){
//        int sum=0;
//        for(int j=1; j<=i; j++) sum+=Res[j];
//        Res[i]=Ans[i]*i-sum;
//    }
//    for(int i=1; i<=T; i++) printf("%d ",Res[i]);
//    return 0;
//}

//// 크로스워드 만들기 X_X -> 실행과정 이해가 필요
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    string s1,s2; int x=0,y=0;
//    cin>>s1>>s2;
//    for(int i=0; i<(int)s1.length(); i++){
//        string::size_type st=s2.find(s1[i]);
//        if(st!=string::npos){
//            y=(int)st;
//            x=i;
//            break;
//        }
//    }
//    for(int j=0; j<(int)s2.length(); j++){
//        for(int i=0; i<(int)s1.length(); i++){
//            if(i==x) printf("%c",s2[j]);
//            else if(j==y) printf("%c",s1[i]);
//            else printf(".");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//// 유니크_5533
//#include <iostream>
//#include <vector>
//#define endl "\n"
//using namespace std;
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int N; cin>>N;
//    vector<vector<int>> pv(N,vector<int>(3,0));
//    for(int i=0; i<N; i++){
//        for(int j=0; j<3; j++){
//            cin>>pv[i][j];
//        }
//    }
//    vector<int> Ans(N,0);
//    for(int i=0; i<3; i++){
//        for(int j=0; j<N; j++){
//            bool flag=true;
//            for(int k=0; k<N; k++){
//                if(j!=k && pv[k][i]==pv[j][i]){
//                flag=false;
//                break;
//                }
//            }
//            if(flag==true){
//                Ans[j]+=pv[j][i];
//            }
//        }
//    }
//    for(int i=0; i<N; i++) cout<<Ans[i]<<endl;
//
//    return 0;
//}

//// 삼각 김밥_2783
//#include <stdio.h>
//#include <string.h>
//#include <cmath>
//int main(){
//    float X,Y,Ans=0; scanf("%f %f",&X,&Y);
//    int O;
//    Ans=X*(1000/Y);
//    scanf("%d",&O);
//    while(O--){
//        float x,y; scanf("%f %f",&x,&y);
//        Ans=fmin(Ans,x*(1000/y));
//    }
//    printf("%.2f\n",Ans);
//    return 0;
//}

//// 직사각형을 만드는 방법
//#include <stdio.h>
//int main(){
//    int N; scanf("%d",&N);
//    int Ans=N, i=2;
//    while(1){
//        if((N/i-(i-1))>0) Ans+=(N/i-(i-1));
//        else break;
//        i++;
//    }
//    printf("%d\n",Ans);
//    return 0;
//}

//// 공약수_5618
//#include <stdio.h>
//int GCD(int a, int b){
//    if(b==0) return a;
//    return GCD(b,a%b);
//}
//int main(){
//    int N; scanf("%d",&N);
//    int n1,n2,n3,max;
//    if(N==2){
//        scanf("%d %d",&n1,&n2);
//        max=GCD(n1,n2);
//        for(int i=1; i<=max; i++){
//            if(n1%i==0 && n2%i==0) printf("%d\n",i);
//        }
//    }else{
//        scanf("%d %d %d",&n1,&n2,&n3);
//        max=GCD(GCD(n1,n2),n3);
//        for(int i=1; i<=max; i++){
//            if(n1%i==0 && n2%i==0 && n3%i==0) printf("%d\n",i);
//        }
//    }
//    return 0;
//}

//// 직각삼각형_4153
//#include <stdio.h>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int main(){
//    while(1){
//        int num[3]={0,};
//        bool flag=false;
//        for(int i=0; i<3; i++){
//            scanf("%d",&num[i]);
//            if(num[i]!=0) flag=true;
//        }
//        if(flag==false) break;
//        sort(num,num+3);
//        if(pow(num[0],2)+pow(num[1],2)==pow(num[2],2)) printf("right\n");
//        else printf("wrong\n");
//    }
//}

//// 콘테스트_5576
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main(){
//    vector<int> peo(10,0);
//    vector<int> Ans(2,0);
//    for(int t=0; t<2; t++){
//        for(int i=0; i<10; i++) scanf("%d",&peo[i]);
//        sort(peo.begin(), peo.end(), greater<int>());
//        for(int i=0; i<3; i++) Ans[t]+=peo[i];
//    } for(int i=0; i<2; i++) printf("%d ",Ans[i]);
//    printf("\n");
//    return 0;
//}

//// 탄산 음료_5032
//#include <iostream>
//#define endl "\n"
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int b1,b2,n,Ans=0;
//    cin>>b1>>b2>>n;
//    int b=b1+b2, B=0;
//    while(1){
//        if(b>=n){
//            b-=n;
//            B++;
//        }else{
//            if(B>=1){
//                B--;
//                b++;
//                Ans++;
//            }else{
//                break;
//            }
//        }
//    }
//    cout<<Ans<<endl;
//    return 0;
//}

//// 결혼식_5567
//#include <iostream>
//#include <vector>
//#include <queue>
//#define endl "\n"
//using namespace std;
//vector<int> v[501];
//vector<int> c(501,0);
//int Ans=0;
//
//void BFS(int n){
//    queue<int> q;
//    q.push(n);
//    c[n]=1;
//    while(!q.empty()){
//        int node = q.front();
//        q.pop();
//        for(int i=0; i<v[node].size(); i++){
//            int next=v[node][i];
//            if(c[next]==0){
//                c[next]=c[node]+1;
//                if(c[next]==2 || c[next]==3) Ans++;
//                q.push(next);
//            }
//        }
//    }
//}
//
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int N,M;
//    cin>>N>>M;
//    for(int i=0; i<M; i++){
//        int n,m; cin>>n>>m;
//        v[n].push_back(m);
//        v[m].push_back(n);
//    }
//    BFS(1); printf("%d\n",Ans);
//    return 0;
//}

//// 앵그리 창영_3034
//#include <stdio.h>
//#include <cmath>
//int main(){
//    int N,W,H,R;
//    scanf("%d %d %d",&N,&W,&H);
//    R=(int)sqrt(pow(W,2)+pow(H,2));
//    for(int i=0; i<N; i++){
//        int t; scanf("%d",&t);
//        if(t<=R) printf("DA\n");
//        else printf("NE\n");
//    }
//    return 0;
//}

//// 슈퍼마리오_2851
//#include <stdio.h>
//#include <cmath>
//int main(){
//    int M[10]={0,};
//    int Ans=0;
//    for(int i=0; i<10; i++) scanf("%d",&M[i]);
//    for(int i=0; i<10; i++) {
//        int now=fabs(100-Ans),next=fabs(100-(Ans+M[i]));
//        if(now >= next) Ans+=M[i];
//        else { printf("%d\n",Ans); return 0; }
//    }
//    printf("%d\n",Ans);
//    return 0;
//}

//// 시험점수_5596
//#include <stdio.h>
//int main(){
//    int min=0,man=0,a,b;
//    for(int i=0; i<4; i++) { scanf("%d",&a); min+=a; }
//    for(int i=0; i<4; i++) { scanf("%d",&b); man+=b; }
//    printf("%d\n",min>man ? min : man);
//    return 0;
//}

//// 내 학점을 구해줘_10984
//#include <stdio.h>
//int main(){
//    int T;
//    scanf("%d",&T);
//    while(T--){
//        int t;
//        int C=0;
//        double G=0;
//        scanf("%d",&t);
//        while(t--){
//            int c;
//            double g;
//            scanf("%d %lf",&c,&g);
//            C+=c; G+=c*g;
//        }
//        printf("%d %.1lf\n",(int)C,G/C);
//    }
//    return 0;
//}

//// 소음_2935
//#include <iostream>
//#include <string>
//#define endl "\n"
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    string s1,s2;
//    char m;
//    cin >> s1 >> m >> s2;
//    if(s1<s2){
//        string temp = s1;
//        s1 = s2;
//        s2 = temp;
//    }
//    if(m=='*') {
//        for(int i=0; i<(int)s2.length()-1; i++){
//            s1+="0";
//        }
//    }
//    else {
//        if(s1.length()==s2.length()) s1[0]='2';
//        else s1[s1.length()-s2.length()]='1';
//    }
//    cout << s1 << endl;
//}

//// Mini Fantasy War_12790
//#include <stdio.h>
//int main(){
//    int T;
//    scanf("%d",&T);
//    while(T--){
//        int a[8]={0,};
//        int Ans=0;
//        for(int i=0; i<8; i++) scanf("%d",&a[i]);
//        int HP=a[0]+a[4],MP=a[1]+a[5],Atk=a[2]+a[6],Def=a[3]+a[7];
//        if(HP<=1) HP=1;
//        if(MP<=1) MP=1;
//        if(Atk<=0) Atk=0;
//        Ans=HP+5*MP+2*Atk+2*Def;
//        printf("%d\n",Ans);
//    }
//}

//// 저울_2437
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//    int t,sum=0;
//    scanf("%d",&t);
//    vector<int> vec(t,0);
//    for(int i=0; i<t; i++) scanf("%d",&vec[i]);
//    sort(vec.begin(),vec.end());
//    for(int i=0; i<t; i++){
//        if(sum<vec[i]-1) break;
//        sum+=vec[i];
//    }
//    printf("%d\n",sum+1);
//}

//// 농구 경기_1159
//#include <iostream>
//#include <vector>
//#include <map>
//#define endl "\n"
//using namespace std;
//
//int main(){
//    ios_base :: sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//    int N; bool flag=false;
//    cin >> N;
//    map<string,int> mp;
//    for(int i=0; i<N; i++) {
//        string temp;
//        cin >> temp;
//        temp = temp.substr(0,1);
//        mp[temp]++;
//    }
//    for(auto m : mp) {
//        if(m.second>=5) {
//            flag=true;
//            cout << m.first;
//        }
//    }
//    if(flag==false) cout << "PREDAJA";
//    cout << endl;
//    return 0;
//}

//// 방학숙제_5532
//#include <stdio.h>
//#include <cmath>
//int main() {
//    int H[5],Ans=0;
//    int math=0,kor=0;
//    double P=0,S=0;
//    for(int i=0; i<5; i++) scanf("%d",&H[i]);
//    math=(H[2]+H[4]-1)/H[4], kor=(H[1]+H[3]-1)/H[3];
//    printf("%d\n",H[0]-(int)fmax(math,kor));
//    return 0;
//}

//// 수도요금_10707
//#include <stdio.h>
//#include <cmath>
//int main() {
//    int arr[5]={0},X=0,Y=0,A=0,B=0,C=0,D=0,P=0,Ans=0;
//    for(int i=0; i<5; i++) scanf("%d",&arr[i]);
//    A=arr[0],B=arr[1],C=arr[2],D=arr[3],P=arr[4];
//    X=P*A,Y=B;
//    if(P>C) Y+=(P-C)*D;
//    Ans=fmin(X,Y);
//    printf("%d\n",Ans);
//    return 0;
//}

//// 점수 계산_2822
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//    vector<pair<int,int>> vec(8,make_pair(0, 0));
//    vector<int> num;
//    int sum=0;
//    for(int i=0; i<8; i++) {
//        scanf("%d",&vec[i].first);
//        vec[i].second=i+1;
//    }
//    sort(vec.begin(), vec.end(),greater<>());
//    for(int i=0; i<5; i++) {
//        sum+=vec[i].first;
//        num.push_back(vec[i].second);
//    }
//    sort(num.begin(), num.end());
//    printf("%d\n",sum);
//    for(auto v : num) printf("%d ",v);
//    printf("\n");
//    return 0;
//}

//// TGN_5063
//#include <stdio.h>
//int main() {
//    int T;
//    scanf("%d",&T);
//    while(T--){
//        int N[3] = {0};
//        for(int i=0; i<3; i++) scanf("%d",&N[i]);
//        if(N[0]<N[1]-N[2]) printf("advertise\n");
//        else if(N[0]>N[1]-N[2]) printf("do not advertise\n");
//        else printf("does not matter\n");
//    }
//    return 0;
//}

//// 과제 안 내신 분..?_5597
//#include <stdio.h>
//#include <vector>
//using namespace std;
//vector<int> vec(31,0);
//int main() {
//    int count = 28;
//    while(count--) {
//        int n;
//        scanf("%d",&n);
//        vec[n]++;
//    }
//    for(int i=1; i<=30; i++) {
//        if(vec[i]==0) printf("%d\n",i);
//    }
//    return 0;
//}

//// 수 이어쓰기-1_1748
//#include <stdio.h>
//#include <cmath>
//using namespace std;
//int main() {
//    int N=0,Ans=0,count=1,n=9;
//    scanf("%d",&N);
//    while(1){
//        if(n<=N){
//            Ans+=count*n;
//            N-=n;
//        }else{
//            Ans+=count*N;
//            break;
//        }
//        count++;
//        n=9*pow(10,count-1);
//    }
//    printf("%d\n",Ans);
//    return 0;
//}

//// 수들의 합_1789
//#include <stdio.h>
//int main() {
//    long long S=0,n=1,s=1,Ans=0;
//    scanf("%lld",&S);
//    while(s<=S){
//        if(s>S) break;
//        else n++; s+=n; Ans++;
//    }
//    printf("%lld\n",Ans);
//    return 0;
//}

// 출석부 문제
//#include <stdio.h>
//#include <vector>
//using namespace std;
//vector<int> vec(31,0);
//int main() {
//    int count = 28;
//    while(count--) {
//        int n;
//        scanf("%d",&n);
//        vec[n]++;
//    }
//    for(int i=1; i<=30; i++) {
//        if(vec[i]==0) printf("%d\n",i);
//    }
//    return 0;
//}

// 색종이_2563
//#include <iostream>
//#include <string.h>
//#define MAX 100
//using namespace std;
//int paper[100][100];
//int main() {
//    int T,Ans=0;
//    for(int i=0; i<MAX; i++) memset(paper[i],0,sizeof(paper[i]));
//    scanf("%d",&T);
//    while(T--) {
//        int x,y;
//        scanf("%d %d",&x,&y);
//        for(int i=x; i<x+10; i++) {
//            for(int j=y; j<y+10; j++) {
//                if(paper[i][j]==0) {
//                paper[i][j]=1;
//                Ans++;
//                }
//            }
//        }
//    }
//    printf("%d\n",Ans);
//    return 0;
//}

//// 택시 기하학_3053
//#include <stdio.h>
//#include <cmath>
//int main() {
//    double R;
//    scanf("%lf",&R);
//    printf("%lf\n%lf\n",R*R*3.1415926535897932384,R*R*2);
//    return 0;
//}

//// 듣보잡_1764
//#include <iostream>
//#include <map>
//#define endl "\n"
//using namespace std;
//
//int main(){
//    ios_base :: sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int N,M,ans=0;
//    map<string,int> map;
//    cin >> N >> M;
//    for(int i=0; i<N; i++){
//        string s;
//        cin >> s;
//        map[s]++;
//    }
//    for(int i=0; i<M; i++){
//        string s;
//        cin >> s;
//        map[s]++;
//    }
//    for(auto m : map) {
//        if(m.second>=2) {
//            ans++;
//        }
//    }
//    cout << ans << endl;
//    for(auto m : map) {
//        if(m.second>=2) {
//            cout << m.first << endl;
//        }
//    }
//    return 0;
//}
//// 알람시계_2884
//#include <iostream>
//using namespace std;
//
//int main() {
//    int H,M;
//    scanf("%d %d",&H,&M);
//    if(M>=45) M-=45;
//    else {
//            M=M+60-45;
//            if(H==0) H=23;
//            else H--;
//    }
//    printf("%d %d\n",H,M);
//    return 0;
//}

//// 정수 N개의 합_15596 * 함수 제출 문제
//#include <stdio.h>
//#include <vector>
//using namespace std;
//vector<int> input(3000000,0);
//long long sum(vector<int> &a) {
//    long long ans=0;
//    for(auto v : a) {
//        ans+=v;
//    }
//    return ans;
//}

//// 에라토스테네스의 체_2960
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> c(1001,1);
//int main() {
//    c[0]=0;
//    c[1]=0;
//    int N,K,count=0;
//    scanf("%d %d",&N,&K);
//
//    for(int i=2; i<=N; i++)
//        if(c[i]==1)
//            for(int j=i; j<=N; j+=i) {
//                if(c[j]==1) {
//                    c[j]=0;
//                    count++;
//                    if(K==count) {
//                        printf("%d\n",j);
//                        return 0;
//                    }
//                }
//            }
//    return 0;
//}


//// 세로읽기_10798
//#include <iostream>
//#include <string>
//#define endl "\n"
//using namespace std;
//string s[5];
//int main() {
//    ios_base :: sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    for(int i=0; i<5; i++)  cin >> s[i];
//    for(int i=0; i<15; i++){
//        for(int j=0; j<5; j++){
//            if((int)s[j].size()>i){
//                cout << s[j][i];
//            }
//        }
//    }
//    cout << endl;
//    return 0;
//}

//// 0 = not cut / 1 = cute
//#include <stdio.h>
//
//int main() {
//    int T,count=0;
//    scanf("%d",&T);
//    int t=T;
//    while(T--) {
//        int n;
//        scanf("%d",&n);
//        if(n==1) count++;
//    }
//    if(count>t/2) printf("Junhee is cute!\n");
//    else printf("Junhee is not cute!\n");
//    return 0;
//}

//// 2007년_1924
//#include <stdio.h>
//#include <string>
//using namespace std;
//int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//string date[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
//int main() {
//    int x,y;
//    int d=0;
//    scanf("%d %d",&x,&y);
//    for(int i=0; i<x-1; i++) {
//        d+=month[i];
//    }
//    d+=y;
//    printf("%s\n",date[d%7].c_str());
//    return 0;
//}

//// 영수증_5565
//#include <stdio.h>
//
//int main() {
//    int ans;
//    scanf("%d",&ans);
//    for(int i=0; i<9; i++){
//        int n;
//        scanf("%d",&n);
//        ans-=n;
//    }
//    printf("%d\n",ans);
//    return 0;
//}

//// 상근날드_5543
//#include <stdio.h>
//#include <cmath>
//int main() {
//    int burger[3] = {0,};
//    int drink[3] = {0,};
//    int minV=9999999;
//    for(int i=0; i<3; i++){
//        scanf("%d",&burger[i]);
//    }
//    for(int i=0; i<2; i++){
//        scanf("%d",&drink[i]);
//        for(int j=0; j<3; j++){
//            minV = fmin(burger[j]+drink[i]-50,minV);
//        }
//    }
//    printf("%d\n",minV);
//    return 0;
//}

//// 10부제_10797
//#include <stdio.h>
//int main() {
//    int t,ans=0;
//    scanf("%d",&t);
//    for(int i=0; i<5; i++) {
//        int n;
//        scanf("%d",&n);
//        if(n==t) ans++;
//    }
//    printf("%d\n",ans);
//    return 0;
//}

//// 팩토리얼_10872
//#include <stdio.h>
//
//int main() {
//    int ans=1;
//    int N;
//    scanf("%d",&N);
//    for(int i=1; i<=N; i++) {
//        ans*=i;
//    }
//    printf("%d\n",ans);
//    return 0;
//}
//// 윷놀이_2490
//#include <stdio.h>
//
//int main() {
//    int count;
//    int T=3;
//    while(T--) {
//        count=0;
//        for(int i=0; i<4; i++){
//            int n;
//            scanf("%d",&n);
//            if(n==0) count++;
//        }
//        printf("");
//        switch (count) {
//            case 0: printf("E\n");
//                break;
//            case 1: printf("A\n");
//                break;
//            case 2: printf("B\n");
//                break;
//            case 3: printf("C\n");
//                break;
//            case 4: printf("D\n");
//            default:
//                break;
//        }
//    }
//    return 0;
//}

//// 평균점수_10039
//
//#include <stdio.h>
//
//int main() {
//    int sum=0;
//    for(int i=0; i<5; i++) {
//        int n;
//        scanf("%d",&n);
//        if(n<40) sum+=40;
//        else sum+=n;
//    }
//    printf("%d",sum/5);
//    return 0;
//}
