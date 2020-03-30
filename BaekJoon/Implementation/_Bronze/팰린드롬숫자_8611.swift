
// MARK: - 팰린드롬숫자 8611
// MARK: Implementation swift 문제풀이

/*
let arr = [0] + Array(readLine()!).map { Int(String($0))! }
let len = arr.count

extension Array where Element == Int {
  mutating func div(_ i: Int) -> Int {
    var idx = 1
    var temp = [Int](repeating: 0, count: len)
    while idx < len {
      let div = (temp[idx-1]*10 + self[idx]) / i
      temp[idx] = (temp[idx-1]*10 + self[idx]) % i
      self[idx] = div
      if idx == len - 1 { break }
      idx += 1
    }
    return temp[idx]
  }
}

var aCnt = 0
for i in 2...10 {
  var tArr = arr
  var Ans = "", rAns = ""
  var numCnt = tArr.filter { $0 != 0 }.count
  while numCnt > 0 {
    let rem = tArr.div(i)
    rAns += "\(rem)"
    Ans = "\(rem)\(Ans)"
    numCnt = tArr.filter { $0 != 0 }.count
  }

  if rAns == Ans {
    aCnt += 1
    print("\(i) \(Ans)")
  }
}

if aCnt == 0 { print("NIE") }
*/
