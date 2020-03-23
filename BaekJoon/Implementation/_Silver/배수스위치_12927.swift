
// MARK: - 배수 스위치 12927
// MARK: swift 문제풀이

/*
var S = Array(readLine()!)
let len = S.count
var cnt = 0

for i in S.indices {
    if S[i] == "Y" {
        var j = i
        while j < len {
            S[j] = S[j] == "Y" ? "N" : "Y"
            j += (i+1)
        }
        cnt += 1
    }
}

print(cnt)
*/
