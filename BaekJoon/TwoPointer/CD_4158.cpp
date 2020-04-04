
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    
    while(1) {
        int N, M; cin>>N>>M;
        if(N==0 && M==0) break;
        
        int A[N], B[M];
        int Ans = 0;
        
        for(int i=0; i<N; i++) cin>>A[i];
        for(int i=0; i<M; i++) cin>>B[i];
        
        int adx = 0, bdx = 0;
        while(adx < N && bdx < M) {
            if(A[adx] == B[bdx]) {
                Ans++;
                adx++;
                bdx++;
            } else {
                if(A[adx] > B[bdx]) bdx++;
                else adx++;
            }
        }
        printf("%d\n",Ans);
    }
    
    return 0;
}
#endif
