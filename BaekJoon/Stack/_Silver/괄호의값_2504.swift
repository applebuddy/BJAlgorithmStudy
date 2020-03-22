
// MARK: - 괄호의 값 2504
// MARK: Stack swift 문제풀이

/*
let G = Array(readLine()!)
var V = [Int](repeating: 1, count: 31)
var sc = 0
var STK = [String]()
var isRight = true

for i in G.indices {
    if G[i] == "(" {
        sc += 1
        STK.append("(")
    } else if G[i] == ")" {
        if sc == 0 || STK.last! != "(" { isRight = false; break }
        if V[sc-1] == 1 { V[sc-1] = 0 }
        V[sc-1] += V[sc] * 2
        V[sc] = 1
        sc -= 1
        STK.removeLast()
    } else if G[i] == "[" {
        sc += 1
        STK.append("[")
    } else if G[i] == "]" {
        if sc == 0 || STK.last! != "[" { isRight = false; break }
        if V[sc-1] == 1 { V[sc-1] = 0 }
        V[sc-1] += V[sc] * 3
        V[sc] = 1
        sc -= 1
        STK.removeLast()
    }
}

if sc > 0 { isRight = false }

print(isRight ? V[0] : 0)
*/
