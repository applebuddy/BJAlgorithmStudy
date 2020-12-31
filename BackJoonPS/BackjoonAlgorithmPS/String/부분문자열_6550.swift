
// MARK: - 부분문자열 6550
// MARK: swift 문제풀이

/*
while let _S = readLine() {
    let S = _S.split(separator: " ").map { Array($0) }
    let s = S[0], t = S[1]
    let len = s.count
    var j = 0
    for i in t.indices {
        if t[i] == s[j] { j += 1 }
        if j == len { break }
    }
    
    print(j == len ? "Yes" : "No")
}
*/
