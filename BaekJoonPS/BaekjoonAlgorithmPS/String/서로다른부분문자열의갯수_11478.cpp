
// MARK: - 서로 다른 부분 문자열의 개수 11478
// MARK: C++ 문제풀이 (비효율적으로 통과)

#if 0
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    unordered_map<string, bool> UMP;
    for(int i=0; i<S.length(); i++) {
        string tmp = "";
        for(int j=i; j<S.length(); j++) {
            tmp += S[j];
            UMP[tmp] = true;
        }
    }
    printf("%d\n",(int)UMP.size());
    
    return 0;
}
#endif
