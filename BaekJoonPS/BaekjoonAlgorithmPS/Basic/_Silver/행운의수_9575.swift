
// MARK: - 행운의수 9575

// MARK: swift 문제풀이

/*
 let T = Int(readLine()!)!

 for _ in 0..<T {
 var dic = [String: Int]()
 let Alen = Int(readLine()!)!
 let A = readLine()!.split(separator: " ").map { Int($0)! }
 let Blen = Int(readLine()!)!
 let B = readLine()!.split(separator: " ").map { Int($0)! }
 let Clen = Int(readLine()!)!
 let C = readLine()!.split(separator: " ").map { Int($0)! }
 for i in 0..<Alen {
     for j in 0..<Blen {
        for k in 0..<Clen {
           let sum = String(A[i] + B[j] + C[k])
           let noCnt = Array(sum).filter { $0 != "5" && $0 != "8" }.count
           if noCnt == 0 {
               dic[sum] = 1
           }
        }
     }
 }
 print(dic.count)
 }
 */
