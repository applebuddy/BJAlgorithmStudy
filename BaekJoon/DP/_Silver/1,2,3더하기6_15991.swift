
// MARK: - 1, 2, 3 더하기 6 15991
// MARK: DP swift 문제풀이

/*
var dic: [Character: Int] = ["0": 0, "1": 1, "2": 2, "3": 3,
                             "4": 4, "5": 5, "6": 6, "7": 7,
                             "8": 8, "9": 9,]
*/
let ip: (() -> Int) = {
  var result = 0
  let S = Array(readLine()!)
  S.forEach {
    // asciiValue! 사용 시 : 40ms
    // unicodeScalar.first!.value 사용 시 : 36ms
    // [Character: Int] dictionary 사용 시 : 40ms
    result = result * 10 + Int($0.unicodeScalars.first!.value) - 48
  }
  return result
}

let N = ip()
let rem = Int(1e9) + 9
let mx = Int(1e6)

var DP = [Int](repeating: 0, count: mx + 1)
DP[1...6] = [1, 2, 2, 3, 3, 6]
for idx in 7...mx {
  DP[idx] = ((DP[idx-2] + DP[idx-4]) % rem + DP[idx-6]) % rem
}

(0..<N).forEach { _ in
  let target = ip()
  print(DP[target])
}

