
// MARK: 문자열변환 TLE 답안 10453
// MARK: swift 문제풀이

/*
let T = Int(readLine()!)!
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Array($0) }
    var A = arr[0], B = arr[1]
    var STK = [Character]()
    var isRight = true
    for i in B.indices {
        if B[i] == "a" {
            STK.append("a")
        } else {
            if STK.isEmpty { isRight = false; break }
            STK.removeLast()
        }
    }
    
    if !STK.isEmpty { isRight = false }
    
    var cnt = 0
    if isRight {
        if A.count != B.count { isRight = false }
        var idx = A.count-1
        while idx >= 0 {
            var flag = true
            if A[idx] != B[idx] {
                flag = false
                var tdx = idx - 1
                while tdx >= 0 {
                    if A[tdx] == B[idx] {
                        for i in tdx..<idx {
                            A.swapAt(i, i+1)
                            cnt += 1
                        }
                        flag = true; break
                    }
                    tdx -= 1
                }
                if !flag { isRight = false; break }
            }
            if !flag { isRight = false; break }
            idx -= 1
        }
    }
    
    print(isRight ? cnt : -1)
}
*/
