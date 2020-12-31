
//
//  backjoonBasicExamSolution.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 31/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
// 수학 문제(소수)
// 골드바흐의 추측
#include <iostream>
using namespace std;
const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX+1];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i*i <= MAX; i++) {
        if (check[i] == false) {
            prime[pn++] = i;
            for (int j = i + i; j <= MAX; j += i) {
                check[j] = true;
            }
        }
    }
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 1; i < pn; i++) {
            if (check[n - prime[i]] == false) {
                cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
                break;
            }
        }
    }
    return 0;
}

// 비트마스크 답안모음
// 집합 11723
#include <cstdio>
#include <cstring>
using namespace std;
char b[111];
int main() {
    int n = 20;
    int m;
    scanf("%d",&m);
    int s = 0;
    int x;
    while (m--) {
        scanf("%s",b);
        if (!strcmp(b,"add")) {
            scanf("%d",&x); x--;
            s = (s | (1 << x));
        } else if (!strcmp(b,"remove")) {
            scanf("%d",&x); x--;
            s = (s & ~(1 << x));
        } else if (!strcmp(b,"check")) {
            scanf("%d",&x); x--;
            int res = (s & (1 << x));
            if (res) {
                puts("1");
            } else {
                puts("0");
            }
        } else if (!strcmp(b,"toggle")) {
            scanf("%d",&x); x--;
            s = (s ^ (1 << x));
        } else if (!strcmp(b,"all")) {
            s = (1<<n)-1; /// 0001 -> 0010 -> 0001
        } else if (!strcmp(b,"empty")) {
            s = 0;
        }
    }
    return 0;
}

// 부분집합의 합 1182
#include <iostream>
using namespace std;
int a[20];
int main() {
    int n,s;
    cin >> n >> s;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i=1; i<(1<<n); i++) {
        int sum = 0;
        for (int k=0; k<n; k++) {
            if (i&(1<<k)) {
                sum += a[k];
            }
        }
        if (sum == s) {
            ans += 1;
        }
    }
    cout << ans << '\n';
    return 0;
}





// 브루트포스 답안모음
// 일곱난쟁이 2309
#include <iostream>
#include <algorithm>
using namespace std;
int a[9];
int n = 9;
int main() {
    int sum = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (sum - a[i] - a[j] == 100) {
                for (int k=0; k<n; k++) {
                    if (i == k || j == k) continue;
                    cout << a[k] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}

// 날짜계산
#include <iostream>
using namespace std;
//int main() {
//    int E, S, M;
//    cin >> E >> S >> M;
//    int e=1, s=1, m=1;
//    for (int i=1;; i++) {
//        if (e == E && s == S && m == M) {
//            cout << i << '\n';
//            break;
//        }
//        e += 1;
//        s += 1;
//        m += 1;
//        if (e == 16) {
//            e = 1;
//        }
//        if (s == 29) {
//            s = 1;
//        }
//        if (m == 20) {
//            m = 1;
//        }
//    }
//    return 0;
//}

// 테트로미노(매우긴 코드)
#include <iostream>
using namespace std;
int a[500][500];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (j+3 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i][j+3];
                if (ans < temp) ans = temp;
            }
            if (i+3 < n) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+3][j];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+2][j];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j-1 >= 0) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j-1];
                if (ans < temp) ans = temp;
            }
            if (i-1 >= 0 && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i-1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j] + a[i+2][j+1];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+2][j+1];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+1 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
                if (ans < temp) ans = temp;
            }
            if (i-1 >= 0 && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i-1][j+1] + a[i-1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j+1 < m) {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j+1] + a[i+2][j+1];
                if (ans < temp) ans = temp;
            }
            if (i+1 < n && j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i+1][j+1] + a[i+1][j+2];
                if (ans < temp) ans = temp;
            }
            if (i+2 < n && j-1 >= 0) {
                int temp = a[i][j] + a[i+1][j] + a[i+1][j-1] + a[i+2][j-1];
                if (ans < temp) ans = temp;
            }
            if (j+2 < m) {
                int temp = a[i][j] + a[i][j+1] + a[i][j+2];
                if (i-1 >= 0) {
                    int temp2 = temp + a[i-1][j+1];
                    if (ans < temp2) ans = temp2;
                }
                if (i+1 < n) {
                    int temp2 = temp + a[i+1][j+1];
                    if (ans < temp2) ans = temp2;
                }
            }
            if (i+2 < n) {
                int temp = a[i][j] + a[i+1][j] + a[i+2][j];
                if (j+1 < m) {
                    int temp2 = temp + a[i+1][j+1];
                    if (ans < temp2) ans = temp2;
                }
                if (j-1 >= 0) {
                    int temp2 = temp + a[i+1][j-1];
                    if (ans < temp2) ans = temp2;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

// 테트로미노 행렬
#include <iostream>
using namespace std;
int a[500][500];
int block[19][3][2] = {
    {{0,1}, {0,2}, {0,3}},
    {{1,0}, {2,0}, {3,0}},
    {{1,0}, {1,1}, {1,2}},
    {{0,1}, {1,0}, {2,0}},
    {{0,1}, {0,2}, {1,2}},
    {{1,0}, {2,0}, {2,-1}},
    {{0,1}, {0,2}, {-1,2}},
    {{1,0}, {2,0}, {2,1}},
    {{0,1}, {0,2}, {1,0}},
    {{0,1}, {1,1}, {2,1}},
    {{0,1}, {1,0}, {1,1}},
    {{0,1}, {-1,1}, {-1,2}},
    {{1,0}, {1,1}, {2,1}},
    {{0,1}, {1,1}, {1,2}},
    {{1,0}, {1,-1}, {2,-1}},
    {{0,1}, {0,2}, {-1,1}},
    {{0,1}, {0,2}, {1,1}},
    {{1,0}, {2,0}, {1,1}},
    {{1,0}, {2,0}, {1,-1}},
};
int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            for (int k=0; k<19; k++) {
                bool ok = true;
                int sum = a[i][j];
                for (int l=0; l<3; l++) {
                    int x = i+block[k][l][0];
                    int y = j+block[k][l][1];
                    if (0 <= x && x < n && 0 <= y && y < m) {
                        sum += a[x][y];
                    } else {
                        ok = false;
                        break;
                    }
                }
                if (ok && ans < sum) {
                    ans = sum;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

// 테트로미노 행렬2 ver
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
vector<vector<string>> blocks = {
    {"1111"},
    {"11",
        "11"},
    {"10",
        "10",
        "11"},
    {"10",
        "11",
        "01"},
    {"111",
        "010"}
};
vector<string> mirror(vector<string> &b) {
    vector<string> ans(b.size());
    for (int i=0; i<b.size(); i++) {
        string temp(b[i]);
        reverse(temp.begin(), temp.end());
        ans[i] = temp;
    }
    return ans;
}
vector<string> rotate(vector<string> &b) {
    vector<string> ans(b[0].size());
    for (int j=0; j<b[0].size(); j++) {
        for (int i=(int)b.size()-1; i>=0; i--) {
            ans[j] += b[i][j];
        }
    }
    return ans;
}
int calc(vector<vector<int>> &a, vector<string> &b, int x, int y) {
    int n = a.size();
    int m = a[0].size();
    int sum = 0;
    for (int i=0; i<b.size(); i++) {
        for (int j=0; j<b[0].size(); j++) {
            if (b[i][j] == '0') continue;
            int nx = x+i;
            int ny = y+j;
            if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                sum += a[nx][ny];
            } else {
                return -1;
            }
        }
    }
    return sum;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            for (auto &block : blocks) {
                vector<string> b(block);
                for (int mir=0; mir<2; mir++) {
                    for (int rot=0; rot<4; rot++) {
                        int cur = calc(a, b, i, j);
                        if (cur != -1 && ans < cur) {
                            ans = cur;
                        }
                        b = rotate(b);
                    }
                    b = mirror(b);
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

// 순열 문제 답안모음
// 다음순열 10972
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (next_permutation(a.begin(),a.end())) {
        for (int i=0; i<n; i++) {
            cout << a[i] << ' ';
        }
    } else {
        cout << "-1";
    }
    cout << '\n';
    return 0;
}


// 이전순열
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (prev_permutation(a.begin(),a.end())) {
        for (int i=0; i<n; i++) {
            cout << a[i] << ' ';
        }
    } else {
        cout << "-1";
    }
    cout << '\n';
    return 0;
}

// 모든순열
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        a[i] = i+1;
    }
    do {
        for (int i=0; i<n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}

// 차이를 최대로
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int calculate(vector<int> &a) {
    int sum = 0;
    for (int i=1; i<a.size(); i++) {
        sum += abs(a[i] - a[i-1]);
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int ans = 0;
    
    do {
        int temp = calculate(a);
        ans = max(ans,temp);
    } while(next_permutation(a.begin(), a.end()));
    
    cout << ans << '\n';
    return 0;
}

// 외판원순회 2
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int a[20][20];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    vector<int> d(n);
    for (int i=0; i<n; i++) {
        d[i] = i;
    }
    
    int ans=2147483647;
    
    do {
        bool ok = true;
        int sum = 0;
        for (int i=0; i<n-1; i++) {
            if (a[d[i]][d[i+1]] == 0) {
                ok = false;
            } else {
                sum += a[d[i]][d[i+1]];
            }
        }
        if (ok && a[d[n-1]][d[0]] != 0) {
            sum += a[d[n-1]][d[0]];
            if (ans > sum) ans = sum;
        }
    } while (next_permutation(d.begin()+1, d.end()));
    
    printf("%d\n",ans);
    return 0;
}

// 로또
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        vector<int> d;
        for (int i=0; i<n-6; i++) {
            d.push_back(0);
        }
        for (int i=0; i<6; i++) {
            d.push_back(1);
        }
        vector<vector<int>> ans;
        do {
            vector<int> current;
            for (int i=0; i<n; i++) {
                if (d[i] == 1) {
                    current.push_back(a[i]);
                }
            }
            ans.push_back(current);
        } while (next_permutation(d.begin(), d.end()));
        sort(ans.begin(), ans.end());
        for (auto &v : ans) {
            for (int i=0; i<v.size(); i++) {
                cout << v[i] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}

// 연산자끼워넣기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calc(vector<int> &a, vector<int> &b) {
    int n = a.size();
    int ans = a[0];
    for (int i=1; i<n; i++) {
        if (b[i-1] == 0) {
            ans = ans + a[i];
        } else if (b[i-1] == 1) {
            ans = ans - a[i];
        } else if (b[i-1] == 2) {
            ans = ans * a[i];
        } else {
            ans = ans / a[i];
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> b;
    for (int i=0; i<4; i++) {
        int cnt;
        cin >> cnt;
        for (int k=0; k<cnt; k++) {
            b.push_back(i);
        }
    }
    sort(b.begin(),b.end());
    vector<int> result;
    do {
        int temp = calc(a, b);
        result.push_back(temp);
    } while (next_permutation(b.begin(), b.end()));
    auto ans = minmax_element(result.begin(), result.end());
    cout << *ans.second << '\n';
    cout << *ans.first << '\n';
    return 0;
}




// 그래프 문제 답안모음
// ABCDE
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool a[2000][2000];
vector<int> g[2000];
vector<pair<int,int>> edges;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int from, to;
        cin >> from >> to;
        edges.push_back({from, to});
        edges.push_back({to, from});
        a[from][to] = a[to][from] = true;
        g[from].push_back(to);
        g[to].push_back(from);
    }
    m *= 2;
    for (int i=0; i<m; i++) {
        for (int j=0; j<m; j++) {
            // A -> B
            int A = edges[i].first;
            int B = edges[i].second;
            // C -> D
            int C = edges[j].first;
            int D = edges[j].second;
            if (A == B || A == C || A == D || B == C || B == D || C == D) {
                continue;
            }
            // B -> C
            if (!a[B][C]) {
                continue;
            }
            // D -> E
            for (int E : g[D]) {
                if (A == E || B == E || C == E || D == E) {
                    continue;
                }
                cout << 1 << '\n';
                return 0;
            }
        }
    }
    cout << 0 << '\n';
    return 0;
}

// 연결요소
#include <cstdio>
#include <vector>
using namespace std;
vector<int> a[1001];
bool check[1001];
void dfs(int node) {
    check[node] = true;
    for (int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        if (check[next] == false) {
            dfs(next);
        }
    }
}
int main() {
    int n, m;
    scanf("%d %d",&n,&m);
    for (int i=0; i<m; i++) {
        int u,v;
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    int components = 0;
    for (int i=1; i<=n; i++) {
        if (check[i] == false) {
            dfs(i);
            components += 1;
        }
    }
    printf("%d\n",components);
    return 0;
}

// 이분그래프
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[20001];
int color[20001];
void dfs(int node, int c) {
    color[node] = c;
    for (int i=0; i<a[node].size(); i++) {
        int next = a[node][i];
        if (color[next] == 0) {
            dfs(next, 3-c);
        }
    }
}
int main() {
    int t;
    scanf("%d\n",&t);
    while (t--) {
        int n, m;
        scanf("%d %d",&n,&m);
        for (int i=1; i<=n; i++) {
            a[i].clear();
            color[i] = 0;
        }
        for (int i=0; i<m; i++) {
            int u,v;
            scanf("%d %d",&u,&v);
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for (int i=1; i<=n; i++) {
            if (color[i] == 0) {
                dfs(i, 1);
            }
        }
        bool ok = true;
        for (int i=1; i<=n; i++) {
            for (int k=0; k<a[i].size(); k++) {
                int j = a[i][k];
                if (color[i] == color[j]) {
                    ok = false;
                }
            }
        }
        printf("%s\n",ok ? "YES" : "NO");
    }
    return 0;
}

// 단지번호붙이기 BFS
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int a[30][30];
int group[30][30];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n;
int ans[25*25];
void bfs(int x, int y, int cnt) {
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    group[x][y] = cnt;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                if (a[nx][ny] == 1 && group[nx][ny] == 0) {
                    q.push(make_pair(nx,ny));
                    group[nx][ny] = cnt;
                }
            }
        }
    }
}
int main() {
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%1d",&a[i][j]);
        }
    }
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == 1 && group[i][j] == 0) {
                bfs(i, j, ++cnt);
            }
        }
    }
    printf("%d\n",cnt);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            ans[group[i][j]]+=1;
        }
    }
    sort(ans+1, ans+cnt+1);
    for (int i=1; i<=cnt; i++) {
        printf("%d\n",ans[i]);
    }
    return 0;
}

// 단지번호붙이기 DFS
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int a[30][30];
int d[30][30];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n;
int ans[25*25];
void dfs(int x, int y, int cnt) {
    d[x][y] = cnt;
    for (int k=0; k<4; k++) {
        int nx = x+dx[k];
        int ny = y+dy[k];
        if (0 <= nx && nx < n && 0 <= ny && ny < n) {
            if (a[nx][ny] == 1 && d[nx][ny] == 0) {
                dfs(nx, ny, cnt);
            }
        }
    }
}
int main() {
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%1d",&a[i][j]);
        }
    }
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == 1 && d[i][j] == 0) {
                dfs(i, j, ++cnt);
            }
        }
    }
    printf("%d\n",cnt);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            ans[d[i][j]]+=1;
        }
    }
    sort(ans+1, ans+cnt+1);
    for (int i=1; i<=cnt; i++) {
        printf("%d\n",ans[i]);
    }
    return 0;
}


// 섬의개수
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int a[100][100];
int d[100][100];
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1};
int n,m;
void bfs(int x, int y, int cnt) {
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    d[x][y] = cnt;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int k=0; k<8; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                if (a[nx][ny] == 1 && d[nx][ny] == 0) {
                    q.push(make_pair(nx,ny));
                    d[nx][ny] = cnt;
                }
            }
        }
    }
}
int main() {
    while (true) {
        scanf("%d %d",&m,&n);
        if (n == 0 && m == 0) break;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                scanf("%1d",&a[i][j]);
                d[i][j] = 0;
            }
        }
        int cnt = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (a[i][j] == 1 && d[i][j] == 0) {
                    bfs(i, j, ++cnt);
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

// 미로탐색
#include <cstdio>
#include <queue>
using namespace std;
int n,m;
int a[100][100];
bool check[100][100];
int dist[100][100];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int main() {
    scanf("%d %d",&n,&m);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%1d",&a[i][j]);
        }
    }
    queue<pair<int,int>> q;
    q.push(make_pair(0, 0));
    check[0][0] = true;
    dist[0][0] = 1;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                if (check[nx][ny] == false && a[nx][ny] == 1) {
                    q.push(make_pair(nx, ny));
                    dist[nx][ny] = dist[x][y] + 1;
                    check[nx][ny] = true;
                }
            }
        }
    }
    printf("%d\n",dist[n-1][m-1]);
    return 0;
}

// 토마토
#include <cstdio>
#include <queue>
using namespace std;
int a[1000][1000];
int d[1000][1000];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int main() {
    int n,m;
    scanf("%d %d",&m,&n);
    queue<pair<int,int>> q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d",&a[i][j]);
            d[i][j] = -1;
            if (a[i][j] == 1) {
                q.push(make_pair(i,j));
                d[i][j] = 0;
            }
        }
    }
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                if (a[nx][ny] == 0 && d[nx][ny] == -1) {
                    d[nx][ny] = d[x][y] + 1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (ans < d[i][j]) {
                ans = d[i][j];
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j] == 0 && d[i][j] == -1) {
                ans = -1;
            }
        }
    }
    
    printf("%d\n",ans);
    return 0;
}

// 숨바꼭질
#include <iostream>
#include <queue>
using namespace std;
const int MAX = 200000;
bool check[MAX+1];
int dist[MAX+1];
int main() {
    int n, m;
    cin >> n >> m;
    check[n] = true;
    dist[n] = 0;
    queue<int> q;
    q.push(n);
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        if (now-1 >= 0) {
            if (check[now-1] == false) {
                q.push(now-1);
                check[now-1] = true;
                dist[now-1] = dist[now] + 1;
            }
        }
        if (now+1 < MAX) {
            if (check[now+1] == false) {
                q.push(now+1);
                check[now+1] = true;
                dist[now+1] = dist[now] + 1;
            }
        }
        if (now*2 < MAX) {
            if (check[now*2] == false) {
                q.push(now*2);
                check[now*2] = true;
                dist[now*2] = dist[now] + 1;
            }
        }
    }
    cout << dist[m] << '\n';
    return 0;
}

// 이모티콘
#include <iostream>
#include <tuple>
#include <queue>
#include <cstring>
using namespace std;
int d[1001][1001];
int main() {
    int n;
    cin >> n;
    memset(d,-1,sizeof(d));
    queue<pair<int,int>> q;
    q.push(make_pair(1,0));
    d[1][0] = 0;
    while (!q.empty()) {
        int s, c;
        tie(s, c) = q.front();
        q.pop();
        if (d[s][s] == -1) {
            d[s][s] = d[s][c] + 1;
            q.push(make_pair(s,s));
        }
        if (s+c <= n && d[s+c][c] == -1) {
            d[s+c][c] = d[s][c] + 1;
            q.push(make_pair(s+c, c));
        }
        if (s-1 >= 0 && d[s-1][c] == -1) {
            d[s-1][c] = d[s][c] + 1;
            q.push(make_pair(s-1, c));
        }
    }
    int ans = -1;
    for (int i=0; i<=n; i++) {
        if (d[n][i] != -1) {
            if (ans == -1 || ans > d[n][i]) {
                ans = d[n][i];
            }
        }
    }
    cout << ans << '\n';
    return 0;
}

// 덱/큐 문제모음

// 숨바꼭질 큐
#include <iostream>
#include <queue>
#include <deque>
using namespace std;
bool c[1000000];
int d[1000000];
int MAX = 1000000;
int main() {
    int n, m;
    cin >> n >> m;
    c[n] = true;
    d[n] = 0;
    queue<int> q;
    queue<int> next_queue;
    q.push(n);
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        if (now*2 < MAX) {
            if (c[now*2] == false) {
                q.push(now*2);
                c[now*2] = true;
                d[now*2] = d[now];
            }
        }
        if (now-1 >= 0) {
            if (c[now-1] == false) {
                next_queue.push(now-1);
                c[now-1] = true;
                d[now-1] = d[now] + 1;
            }
        }
        if (now+1 < MAX) {
            if (c[now+1] == false) {
                next_queue.push(now+1);
                c[now+1] = true;
                d[now+1] = d[now] + 1;
            }
        }
        if (q.empty()) {
            q = next_queue;
            next_queue = queue<int>();
        }
    }
    cout << d[m] << '\n';
    return 0;
}

// 숨바꼭질 텍
#include <iostream>
#include <queue>
#include <deque>
using namespace std;
bool c[1000000];
int d[1000000];
int MAX = 1000000;
int main() {
    int n, m;
    cin >> n >> m;
    c[n] = true;
    d[n] = 0;
    deque<int> q;
    q.push_back(n);
    while (!q.empty()) {
        int now = q.front();
        q.pop_front();
        if (now*2 < MAX) {
            if (c[now*2] == false) {
                q.push_front(now*2);
                c[now*2] = true;
                d[now*2] = d[now];
            }
        }
        if (now-1 >= 0) {
            if (c[now-1] == false) {
                q.push_back(now-1);
                c[now-1] = true;
                d[now-1] = d[now] + 1;
            }
        }
        if (now+1 < MAX) {
            if (c[now+1] == false) {
                q.push_back(now+1);
                c[now+1] = true;
                d[now+1] = d[now] + 1;
            }
        }
    }
    cout << d[m] << '\n';
    return 0;
}

// 알고스팟
#include <cstdio>
#include <queue>
using namespace std;
int d[555][555];
int a[555][555];
int n,m;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int main() {
    scanf("%d %d",&m,&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%1d",&a[i][j]);
            d[i][j] = -1;
        }
    }
    queue<pair<int,int>> q;
    queue<pair<int,int>> next_queue;
    q.push(make_pair(0,0));
    d[0][0] = 0;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                if (d[nx][ny] == -1) {
                    if (a[nx][ny] == 0) {
                        d[nx][ny] = d[x][y];
                        q.push(make_pair(nx,ny));
                    } else {
                        d[nx][ny] = d[x][y]+1;
                        next_queue.push(make_pair(nx,ny));
                    }
                }
            }
        }
        if (q.empty()) {
            q = next_queue;
            next_queue = queue<pair<int,int>>();
        }
    }
    printf("%d\n",d[n-1][m-1]);
    return 0;
}

// 벽부수고 이동하기
#include <iostream>
#include <queue>
#include <cstdio>
#include <tuple>
using namespace std;
int a[1000][1000];
int d[1000][1000][2];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int main() {
    int n, m;
    scanf("%d %d",&n,&m);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%1d",&a[i][j]);
        }
    }
    queue<tuple<int,int,int>> q;
    d[0][0][0] = 1;
    q.push(make_tuple(0,0,0));
    while (!q.empty()) {
        int x, y, z;
        tie(x,y,z) = q.front(); q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (a[nx][ny] == 0 && d[nx][ny][z] == 0) {
                d[nx][ny][z] = d[x][y][z] + 1;
                q.push(make_tuple(nx,ny,z));
            }
            if (z == 0 && a[nx][ny] == 1 && d[nx][ny][z+1] == 0) {
                d[nx][ny][z+1] = d[x][y][z] + 1;
                q.push(make_tuple(nx,ny,z+1));
            }
        }
    }
    if (d[n-1][m-1][0] != 0 && d[n-1][m-1][1] != 0) {
        cout << min(d[n-1][m-1][0], d[n-1][m-1][1]);
    } else if (d[n-1][m-1][0] != 0) {
        cout << d[n-1][m-1][0];
    } else if (d[n-1][m-1][1] != 0) {
        cout << d[n-1][m-1][1];
    } else {
        cout << -1;
    }
    cout << '\n';
    return 0;
}

// 탈출
#include <iostream>
#include <tuple>
#include <algorithm>
#include <cstring>
#include <queue>
#include <string>
using namespace std;
int water[50][50];
int d[50][50];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    memset(water,-1,sizeof(water));
    queue<pair<int,int>> q;
    int sx,sy,ex,ey;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j] == '*') {
                q.push(make_pair(i,j));
                water[i][j] = 0;
            } else if (a[i][j] == 'S') {
                sx = i;
                sy = j;
            } else if (a[i][j] == 'D') {
                ex = i;
                ey = j;
            }
        }
    }
    while (!q.empty()) {
        int x, y;
        tie(x,y) = q.front(); q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }
            if (water[nx][ny] != -1) continue;
            if (a[nx][ny] == 'X') continue;
            if (a[nx][ny] == 'D') continue;
            water[nx][ny] = water[x][y] + 1;
            q.push(make_pair(nx,ny));
        }
    }
    memset(d,-1,sizeof(d));
    q.push(make_pair(sx,sy));
    d[sx][sy] = 0;
    while (!q.empty()) {
        int x, y;
        tie(x,y) = q.front(); q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                continue;
            }
            if (d[nx][ny] != -1) continue;
            if (a[nx][ny] == 'X') continue;
            if (water[nx][ny] != -1 && d[x][y]+1 >= water[nx][ny]) continue;
            d[nx][ny] = d[x][y] + 1;
            q.push(make_pair(nx,ny));
        }
    }
    if (d[ex][ey] == -1) {
        cout << "KAKTUS\n";
    } else {
        cout << d[ex][ey] << '\n';
    }
    return 0;
}







// 다이나믹프로그래밍 문제 답안모음

// 1로만들기 Top-Down
#include <iostream>
using namespace std;
int d[1000001];
int go(int n) {
    if (n == 1) {
        return 0;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = go(n-1) + 1;
    if (n%2 == 0) {
        int temp = go(n/2) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    if (n%3 == 0) {
        int temp = go(n/3) + 1;
        if (d[n] > temp) {
            d[n] = temp;
        }
    }
    return d[n];
}
int main() {
    int n;
    cin >> n;
    cout << go(n) << '\n';
    return 0;
}

// 1로만들기 BottomUp
#include <iostream>
using namespace std;
int d[1000001];
int main() {
    int n;
    cin >> n;
    d[1] = 0;
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 1;
        if (i%2 == 0 && d[i] > d[i/2] + 1) {
            d[i] = d[i/2] + 1;
        }
        if (i%3 == 0 && d[i] > d[i/3] + 1) {
            d[i] = d[i/3] + 1;
        }
    }
    cout << d[n] << '\n';
    return 0;
}

// 2xN타일링
#include <cstdio>
int d[1001];
int main() {
    d[0]=1;
    d[1]=1;
    int n;
    scanf("%d",&n);
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1]+d[i-2];
        d[i] %= 10007;
    }
    printf("%d\n",d[n]);
    return 0;
}

// 2xN타일링(2)
#include <cstdio>
int d[1001];
int main() {
    d[0]=1;
    d[1]=1;
    int n;
    scanf("%d",&n);
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1]+d[i-2]+d[i-2];
        d[i] %= 10007;
    }
    printf("%d\n",d[n]);
    return 0;
}

// 1,2,3 더하기
#include <stdio.h>
int d[11];
int main() {
    d[0] = 1;
    for (int i=1; i<=10; i++) {
        if (i-1 >= 0) {
            d[i] += d[i-1];
        }
        if (i-2 >= 0) {
            d[i] += d[i-2];
        }
        if (i-3 >= 0) {
            d[i] += d[i-3];
        }
    }
    int t;
    scanf("%d",&t);
    while (t--) {
        int n;
        scanf("%d",&n);
        printf("%d\n",d[n]);
    }
}


// 1,2,3 더하기 3
#include <iostream>
using namespace std;
long long d[1000001];
const long long mod = 1000000009LL;
int main() {
    d[0] = 1;
    for (int i=1; i<=1000000; i++) {
        if (i-1 >= 0) {
            d[i] += d[i-1];
        }
        if (i-2 >= 0) {
            d[i] += d[i-2];
        }
        if (i-3 >= 0) {
            d[i] += d[i-3];
        }
        d[i] %= mod;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }
}

// 카드구매하기
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    vector<int> d(n+1);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            d[i] = max(d[i],d[i-j]+a[j]);
        }
    }
    cout << d[n] << '\n';
    return 0;
}


// 카드구매하기 2
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    vector<int> d(n+1,-1);
    d[0] = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if (d[i] == -1 || d[i] > d[i-j]+a[j]) {
                d[i] = d[i-j]+a[j];
            }
        }
    }
    cout << d[n] << '\n';
    return 0;
}

// 1,2,3더하기 5
#include <stdio.h>
long long d[1000001][4];
const long long mod = 1000000009LL;
const int limit = 100000;
int main() {
    for (int i=1; i<=limit; i++) {
        if (i-1 >= 0) {
            d[i][1] = d[i-1][2] + d[i-1][3];
            if (i == 1) {
                d[i][1] = 1;
            }
        }
        if (i-2 >= 0) {
            d[i][2] = d[i-2][1] + d[i-2][3];
            if (i == 2) {
                d[i][2] = 1;
            }
        }
        if (i-3 >= 0) {
            d[i][3] = d[i-3][1] + d[i-3][2];
            if (i == 3) {
                d[i][3] = 1;
            }
        }
        d[i][1] %= mod;
        d[i][2] %= mod;
        d[i][3] %= mod;
    }
    int t;
    scanf("%d",&t);
    while (t--) {
        int n;
        scanf("%d",&n);
        printf("%lld\n",(d[n][1] + d[n][2] + d[n][3])%mod);
    }
}

// 쉬운계단수
#include <iostream>
using namespace std;
long long d[101][10];
long long mod = 1000000000;
int main() {
    int n;
    cin >> n;
    for (int i=1; i<=9; i++) {
        d[1][i] = 1;
    }
    for (int i=2; i<=n; i++) {
        for (int j=0; j<=9; j++) {
            d[i][j] = 0;
            if (j-1 >= 0) {
                d[i][j] += d[i-1][j-1];
            }
            if (j+1 <= 9) {
                d[i][j] += d[i-1][j+1];
            }
            d[i][j] %= mod;
        }
    }
    long long ans = 0;
    for (int i=0; i<=9; i++) {
        ans += d[n][i];
    }
    ans %= mod;
    cout << ans << '\n';
    return 0;
}

//오르막수
#include <iostream>
using namespace std;
long long d[1001][10];
long long mod = 10007;
int main() {
    int n;
    cin >> n;
    for (int i=0; i<=9; i++) {
        d[1][i] = 1;
    }
    for (int i=2; i<=n; i++) {
        for (int j=0; j<=9; j++) {
            for (int k=0; k<=j; k++) {
                d[i][j] += d[i-1][k];
                d[i][j] %= mod;
            }
        }
    }
    long long ans = 0;
    for (int i=0; i<10; i++) {
        ans  += d[n][i];
    }
    ans %= mod;
    cout << ans << '\n';
    return 0;
}

// 이친수
#include <iostream>
using namespace std;
long long d[91];
int main() {
    int n;
    cin >> n;
    d[1] = 1;
    d[2] = 1;
    for (int i=3; i<=n; i++) {
        d[i] = d[i-1] + d[i-2];
    }
    cout << d[n] << '\n';
    return 0;
}

// 스티커
#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
long long a[100001][2];
long long d[100001][3];
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        for (int i=1; i<=n; i++) {
            scanf("%lld",&a[i][0]);
        }
        for (int i=1; i<=n; i++) {
            scanf("%lld",&a[i][1]);
        }
        d[0][0] = d[0][1] = d[0][2] = 0;
        for (int i=1; i<=n; i++) {
            d[i][0] = max(d[i-1][0],max(d[i-1][1],d[i-1][2]));
            d[i][1] = max(d[i-1][0],d[i-1][2])+a[i][0];
            d[i][2] = max(d[i-1][0],d[i-1][1])+a[i][1];
        }
        long long ans = 0;
        for (int i=1; i<=n; i++) {
            ans = max(max(ans,d[i][0]),max(d[i][1],d[i][2]));
        }
        printf("%lld\n",ans);
    }
    return 0;
}

//포도주 시식
#include <iostream>
using namespace std;
int a[10001];
int d[10001];
int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    d[1] = a[1];
    d[2] = a[1]+a[2];
    for (int i=3; i<=n; i++) {
        d[i] = d[i-1];
        if (d[i] < d[i-2] + a[i]) {
            d[i] = d[i-2] + a[i];
        }
        if (d[i] < d[i-3] + a[i] + a[i-1]) {
            d[i] = d[i-3] + a[i] + a[i-1];
        }
    }
    printf("%d\n",d[n]);
    return 0;
}

//가장 긴 증가하는 부분수열
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> d(n);
    for (int i=0; i<n; i++) {
        d[i] = 1;
        for (int j=0; j<i; j++) {
            if (a[j] < a[i] && d[j]+1 > d[i]) {
                d[i] = d[j]+1;
            }
        }
    }
    
    cout << *max_element(d.begin(),d.end()) << '\n';
    return 0;
}
#endif

#if 0
// 가장 큰 증가하는 부분수열 11055
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> d(n);
    for (int i=0; i<n; i++) {
        d[i] = a[i];
        for (int j=0; j<i; j++) {
            if (a[j] < a[i] && d[j]+a[i] > d[i]) {
                d[i] = d[j]+a[i];
            }
        }
    }
    int ans = *max_element(d.begin(),d.end());
    cout << ans << '\n';
    return 0;
}
#endif

#if 0
//가장 긴 감소하는 부분수열 11722
#include <cstdio>
int a[1001];
int d[1001];
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&a[i]);
    }
    for (int i=n; i>=1; i--) {
        d[i] = 1;
        for (int j=i+1; j<=n; j++) {
            if (a[i] > a[j] && d[i] < d[j]+1) {
                d[i] = d[j]+1;
            }
        }
    }
    int ans = d[1];
    for (int i=2; i<=n; i++) {
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}
#endif
// or

#if 0
#include <cstdio>
int a[1001];
int d[1001];
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&a[i]);
    }
    for (int i=1; i<=n; i++) {
        d[i] = 1;
        for (int j=1; j<=i; j++) {
            if (a[j] > a[i] && d[i] < d[j]+1) {
                d[i] = d[j]+1;
            }
        }
    }
    int ans = d[1];
    for (int i=2; i<=n; i++) {
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}
#endif


#if 0
// 가장 긴 바이토닉수열
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> d(n);
    vector<int> d2(n);
    for (int i=0; i<n; i++) {
        d[i] = 1;
        for (int j=0; j<i; j++) {
            if (a[j] < a[i] && d[j]+1 > d[i]) {
                d[i] = d[j]+1;
            }
        }
    }
    for (int i=n-1; i>=0; i--) {
        d2[i] = 1;
        for (int j=i+1; j<n; j++) {
            if (a[i] > a[j] && d2[j]+1 > d2[i]) {
                d2[i] = d2[j]+1;
            }
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (ans < d[i]+d2[i]-1) {
            ans = d[i]+d2[i]-1;
        }
    }
    
    cout << ans << '\n';
    return 0;
}
#endif

#if 0
// 연속합
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> d(n);
    for (int i=0; i<n; i++) {
        d[i] = a[i];
        if (i == 0) continue;
        if (d[i] < d[i-1] + a[i]) {
            d[i] = d[i-1] + a[i];
        }
    }
    int ans = d[0];
    for (int i=1; i<n; i++) {
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    cout << ans << '\n';
    return 0;
}
#endif

#if 0
// 연속합 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> d(n);
    vector<int> dr(n);
    for (int i=0; i<n; i++) {
        d[i] = a[i];
        if (i == 0) continue;
        if (d[i] < d[i-1] + a[i]) {
            d[i] = d[i-1] + a[i];
        }
    }
    for (int i=n-1; i>=0; i--) {
        dr[i] = a[i];
        if (i == n-1) continue;
        if (dr[i] < dr[i+1] + a[i]) {
            dr[i] = dr[i+1] + a[i];
        }
    }
    int ans = d[0];
    for (int i=1; i<n; i++) {
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    for (int i=1; i<n-1; i++) {
        if (ans < d[i-1] + dr[i+1]) {
            ans = d[i-1] + dr[i+1];
        }
    }
    cout << ans << '\n';
    return 0;
}
#endif


#if 0
// 제곱수의 합
#include <iostream>
using namespace std;
int d[100001];
int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        d[i] = i;
        for (int j=1; j*j <= i; j++) {
            if (d[i] > d[i-j*j]+1) {
                d[i] = d[i-j*j]+1;
            }
        }
    }
    cout << d[n] << '\n';
    return 0;
}
#endif

#if 0
// 합분해
#include <iostream>
using namespace std;
long long d[201][201];
long long mod = 1000000000;
int main() {
    int n, k;
    cin >> n >> k;
    d[0][0] = 1LL;
    for (int i=1; i<=k; i++) {
        for (int j=0; j<=n; j++) {
            for (int l=0; l<=j; l++) {
                d[i][j] += d[i-1][j-l];
                d[i][j] %= mod;
            }
        }
    }
    cout << d[k][n] << '\n';
    return 0;
}
#endif

#if 0
// 합분해 2225
#include <iostream>
using namespace std;
long long d[201][201];
long long mod = 1000000000;
int main() {
    int n, k;
    cin >> n >> k;
    d[0][0] = 1LL;
    for (int i=1; i<=k; i++) {
        for (int j=0; j<=n; j++) {
            d[i][j] = d[i-1][j];
            if (j-1 >= 0) {
                d[i][j] += d[i][j-1];
            }
            d[i][j] %= mod;
        }
    }
    cout << d[k][n] << '\n';
    return 0;
}
#endif
