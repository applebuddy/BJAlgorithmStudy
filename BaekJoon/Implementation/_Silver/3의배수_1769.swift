
// MARK: - 3의배수 1769
// MARK: Implementation swift 문제풀이

/*
var S = Array(readLine()!).map { String($0) }
var flag = false
var Ans = 0
while true {
    var sum = 0
    for i in S.indices {
        sum += Int(S[i])!
    }

    if S.count > 1 { Ans += 1 }
    if sum <= 9 {
        flag = sum % 3 == 0 ? true : false
        break
    }
    else { S = Array(String(sum)).map { String($0) } }
}

print(Ans)
print(flag ? "YES" : "NO")
*/
