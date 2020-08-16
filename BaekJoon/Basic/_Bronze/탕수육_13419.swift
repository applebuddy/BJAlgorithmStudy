
// MARK: - 탕수육

// MARK: swift 문제풀이

/*
 let T = Int(readLine()!)!
 for _ in 0..<T {
 let S = Array(readLine()!)
 var firstChk = [Int](repeating: 0, count: 26)
 var secondChk = [Int](repeating: 0, count: 26)
 var Ans = ["", ""]
 let len = S.count
 var first = "", second = ""
 var idx = 0
 var isFirst = true
 while Ans[0]=="" || Ans[1]=="" {
     if isFirst {
         let ascii = Int(S[idx].unicodeScalars.first!.value) - 65
         if firstChk[ascii] == 0 {
             firstChk[ascii] = 1
             first += "\(S[idx])"
         } else {
             if Ans[0]=="" { Ans[0] = first }
         }
     } else {
         let ascii = Int(S[idx].unicodeScalars.first!.value) - 65
         if secondChk[ascii] == 0 {
             secondChk[ascii] = 1
             second += "\(S[idx])"
         } else {
             if Ans[1]=="" { Ans[1] = second }
         }
     }
     idx += 1
     if idx >= len { idx = 0 }
     isFirst = isFirst == false ? true : false
 }
 print(Ans[0], Ans[1], separator: "\n")
 }
 */
