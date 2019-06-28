//
//  Set_구현.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 24/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//



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
