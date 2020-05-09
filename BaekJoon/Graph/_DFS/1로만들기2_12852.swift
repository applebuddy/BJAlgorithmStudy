
// MARK: - 1로만들기2 12852
// MARK: DFS swift 문제풀이

/*
let N = Int(readLine()!)!
var CNT = Int.max
var Ans = [Int]()

func DFS(_ cnt: Int, _ now: Int, _ arr: [Int]) {
  if cnt > CNT { return }
  if now == 1 {
    if CNT > cnt {
      CNT = cnt
      Ans = arr
    }
    return
  }

  if now % 3 == 0 {
    DFS(cnt+1, now/3, arr + [now/3])
  }

  if now % 2 == 0 {
    DFS(cnt+1, now/2, arr + [now/2])
  }

  DFS(cnt+1, now-1, arr + [now-1])
}

DFS(0, N, [N])
print(CNT)
print(Ans.map { String($0) }.joined(separator: " "))
*/
