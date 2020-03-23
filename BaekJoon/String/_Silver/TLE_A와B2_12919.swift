
// MARK: TLE 답안

/*
let A = Array(readLine()!)
let Alen = A.count
let B = Array(readLine()!)
let Blen = B.count
var Ans = false
var dic = [[Character]: Bool]()

var ac = 0, bc = 0
var ar = 0, br = 0
for i in A.indices {
    if A[i] == "A" { ac += 1 }
    else { bc += 1 }
}

for i in B.indices {
    if B[i] == "A" { ar += 1 }
    else { br += 1 }
}

func DFS(_ S: [Character], _ a: Int, _ b: Int) {
    if dic[S] != nil || a > ar || b > br { return }
    if Ans == true { return }
    if S.count >= Blen {
        if S == B { Ans = true }
        return
    }
    dic[S] = true
    var now = S
    now.append("A")
    DFS(now, a+1, b)
    now[now.count-1] = "B"
    now = now.reversed()
    DFS(now, a, b+1)
}

DFS(A, ac, bc)
print(Ans ? 1 : 0)
*/
