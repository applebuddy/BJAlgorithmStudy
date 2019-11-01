//
//  동전게임_2684.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 동전게임_2684
/// MARK: 비트마스크 활용 통과 답안)
#if 0
#include <iostream>
using namespace std;

int T;
string s;
int ss[44];
int a[11];
int main()
{
    cin>>T;
    while(T--)
    {
        cin>>s;
        memset(a,0,sizeof(a));
        for(int i = 0 ; i < 40; i++)
        {
            ss[i] = (s[i] == 'T' ? 0 : 1);
        }

        int val = ss[0] * 2 + ss[1] ;
        for(int i = 2 ; i < 40; i++)
        { ///1110 111
            val *= 2;
            val += ss[i];
            val &= 7;
            a[val]++;
        }
        for(int i = 0 ; i < 8 ; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
#endif

#if 0
#include <iostream>
#include <map>
#include <string>
using namespace std;

string coinCase[] = {"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        map<string,int> coinMap = {{coinCase[0],0},{coinCase[1],0},{coinCase[2],0},{coinCase[3],0},{coinCase[4],0},{coinCase[5],0},{coinCase[6],0},{coinCase[7],0}};
        string S; cin>>S;
        for(int i=0; i<S.length(); i++) coinMap[S.substr(i,3)]++;
        for(int i=0; i<8; i++) {
            printf("%d", coinMap[coinCase[i]]);
            if(i!=7) printf(" ");
        }
        puts("");
    }
    return 0;
}
#endif
