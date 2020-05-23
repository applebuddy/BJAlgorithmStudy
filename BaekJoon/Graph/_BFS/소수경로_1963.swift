
// MARK: - 소수경로 1963
// MARK: BFS swift 문제풀이

/*
typealias SIPair = (String, Int)
let T = Int(readLine()!)!
let MX = 10001
var PV = [Bool](repeating: true, count: MX+1)
var SV = [Int]()
var EV = [Int]()
PV[0] = false
PV[1] = false

var i = 2, j = 4
while i*i <= MX {
  if PV[i] {
    j = i+i
    while j <= MX {
      PV[j] = false
      j += i
    }
  }
  i += 1
}

extension Array where Element == Int {
  func convertArrToInt() -> Int {
    return self[0] * 1000 + self[1] * 100 + self[2] * 10 + self[3]
  }

  func convertArrToStr() -> String {
    return "\(self[0])\(self[1])\(self[2])\(self[3])"
  }
}

func BFS() -> Int {
  var Q = [SIPair]()
  var visit = [Bool](repeating: false, count: MX)
  var cur = 0
  visit[SV[0]*1000 + SV[1]*100 + SV[2]*10 + SV[3]] = true
  let S = SV.convertArrToStr()
  let E = EV.convertArrToStr()
  Q.append((S, 0))
  
  while cur < Q.count {
    let now = Array(Q[cur].0).map { Int(String($0))! }
    let cnt = Q[cur].1
    cur += 1
    for i in 0..<4 {
      for j in 0...9 {
        var tNow = now
        tNow[i] = j
        let tNum = tNow.convertArrToInt()
        let tStr = tNow.convertArrToStr()
        if PV[tNum] == false || tNum < 1000 || visit[tNum] == true { continue }
        visit[tNum] = true
        if tStr == E { return cnt + 1 }
        Q.append((tStr, cnt+1))
      }
    }
  }
  return 0
}

for _ in 0..<T {
  let arr = readLine()!.split(separator: " ")
  SV = Array(arr[0]).map { Int(String($0))! }
  EV = Array(arr[1]).map { Int(String($0))! }
  print(BFS())
}
*/
