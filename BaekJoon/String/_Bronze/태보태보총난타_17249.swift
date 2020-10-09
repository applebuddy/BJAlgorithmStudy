
// MARK: - 태보태보 총난타 17249

// MARK: String swift 문제풀이

let S = readLine()!.split(separator: "0").map { String($0) }
print(S[0].filter { $0 == "@" }.count, S[1].filter { $0 == "@" }.count, separator: " ")
