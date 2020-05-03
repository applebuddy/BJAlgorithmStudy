
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T = 1;
    while(1) {
        string S; cin>>S;
        if(!S.empty() && S[0]=='-') break;
        int cnt = 0;
        int Ans = 0;
        for(int i=0; i<S.length(); i++) {
            if(S[i] == '{') cnt++;
            else {
                if(cnt==0) {
                    Ans++;
                    cnt++;
                }
                else cnt--;
            }
        }
        printf("%d. %d\n",T, Ans+cnt/2);
        T++;
    }
}
#endif
