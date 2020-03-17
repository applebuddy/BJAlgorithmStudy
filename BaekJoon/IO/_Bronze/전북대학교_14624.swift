
// MARK: - 전북대학교 14624
// MARK: IO swift 문제풀이

/*
let N = Int(readLine()!)!
if N & 1 == 1 {
    var S = [String](repeating: "*", count: N)
    let center = S.count / 2
    var left = center, right = center
    print(S.joined())

    for _ in 0..<center+1 {
        S = [String]()
        for j in 0...right {
            if left == j || right == j { S.append("*") }
            else { S.append(" ") }
        }
        print(S.joined())
        left -= 1; right += 1
    }
} else { print("I LOVE CBNU") }
*/
