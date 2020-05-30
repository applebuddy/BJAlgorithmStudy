
// MARK: - 이진법시계 2704

// MARK: swift 문제풀이

/*
 let T = Int(readLine()!)!

 extension Array where Element == Character {
 func fitToArr() -> [String] {
   let len = self.count
   return ([Character](repeating: "0", count: 6-len) + self).map { String($0) }
 }
 }
 for _ in 0..<T {
 let S = Array(readLine()!).map { String($0) }
 let h = Int(S[0...1].joined())!
 let m = Int(S[3...4].joined())!
 let s = Int(S[6...7].joined())!
 var first = "", second = ""
 let arr = [Array(String(h, radix: 2)).fitToArr(), Array(String(m, radix: 2)).fitToArr(), Array(String(s, radix: 2)).fitToArr()]
 for i in arr.indices {
   first += arr[i].joined()
 }

 for j in 0..<arr[0].count {
   for i in 0..<arr.count {
     second += arr[i][j]
   }
 }

 print(second, first, separator: " ")
 }
 */
