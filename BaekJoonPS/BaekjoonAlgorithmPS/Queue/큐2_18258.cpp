
// MARK: - 큐2 18258

// MARK: Queue C++ 문제풀이

#include <iostream>
#include <queue>
#include <string>
using namespace std;

queue<int> Q;

void runQ() {
  string key;
  int value;
  cin>>key;
  if(key == "push") {
    cin>>value;
    Q.push(value);
  } else if(key == "pop") {
    if(Q.empty()) printf("-1\n");
    else {
      printf("%d\n",Q.front());
      Q.pop();
    }
  } else if(key == "size") {
    printf("%ld\n",Q.size());
  } else if(key == "empty") {
    printf("%d\n",Q.empty() ? 1 : 0);
  } else if(key == "front") {
    printf("%d\n",Q.empty() ? -1 : Q.front());
  } else if(key == "back") {
    printf("%d\n",Q.empty() ? - 1 : Q.back());
  }
}

int main() {
  ios_base :: sync_with_stdio(0); cin.tie(0);
  int N; cin>>N;
  for (int i=0; i<N; i++) {
    runQ();
  }
}
