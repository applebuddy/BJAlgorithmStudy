
// MARK: TLE 답안 기록

/*
let len = Int(readLine()!)!
let S = Array(readLine()!)

// var G = [String]()
var Ans = 0
let rem = Int(1e9)+9

func getBrace(_ left: Int, _ right: Int) {
    if left == 0 {
      // print((G + [String](repeating: ")", count: right)).joined())
      Ans += 1
      Ans %= rem
      return
    }

    // G.append("(")
    getBrace(left-1, right)
    // G.removeLast()
    if left < right {
      // G.append(")")
      getBrace(left, right-1)
      // G.removeLast()
    }
}

getBrace(len/2, len/2)
print(Ans)
*/
