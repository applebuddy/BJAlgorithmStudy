
// MARK: - 최대 GCD 9417

// MARK: math swift 문제풀이

/*
 let T = Int(readLine()!)!

 func getGCD(_ a: Int, _ b: Int) -> Int {
 if b == 0 { return a }
 return getGCD(b, a%b)
 }

 for _ in 0..<T {
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let len = arr.count
 var Ans = 0
 for i in 0..<len-1 {
     for j in i+1..<len {
         Ans = max(Ans, getGCD(arr[i], arr[j]))
     }
 }
 print(Ans)
 }
 */
