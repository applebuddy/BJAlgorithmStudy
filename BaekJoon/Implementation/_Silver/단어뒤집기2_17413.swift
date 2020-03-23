
// MARK: - 단어뒤집기2 17413
// MARK: Implementation swift 문제풀이

/*
let S = Array(readLine()!).map { String($0) }
var flag = false
var Ans = [String]()
var rev = [String]()
for i in S.indices {
    if S[i] == "<" { flag = true }
    else if S[i] == ">" { flag = false; Ans.append(">"); continue }
    
    if flag {
        if !rev.isEmpty {
            Ans.insert(contentsOf: Array(rev.reversed()), at: Ans.count)
            rev = []
        }
        Ans.append(S[i])
    } else {
        if S[i] == " " {
            Ans.insert(contentsOf: Array(rev.reversed()), at: Ans.count)
            Ans.append(" ")
            rev = []
        } else {
            rev.append(S[i])
        }
    }
}

Ans.insert(contentsOf: Array(rev.reversed()), at: Ans.count)
print(Ans.joined())
*/
