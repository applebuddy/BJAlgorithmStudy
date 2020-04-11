
// MARK: - 단어정렬 1181
// MARK: swift 문제풀이

/*
let N = Int(readLine()!)!
var SV = [[String]]()
var dic = [String: Bool]()
for _ in 0..<N {
  let S = readLine()!
  if dic[S] == nil {
    dic[S] = true
    SV.append(Array(S).map { String($0) })
  }
}

SV.sort { $0.count < $1.count || ($0.count == $1.count && $0.joined() < $1.joined()) }
for i in SV.indices {
  print(SV[i].joined())
}
*/
