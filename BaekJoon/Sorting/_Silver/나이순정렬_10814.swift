
// MARK: - 나이순 정렬 10814
// MARK: sorting swift 문제풀이

/*
let N = Int(readLine()!)!
var G = [(Int, Int, String)]()
for i in 0..<N {
  let arr = readLine()!.split(separator: " ").map { String($0) }
  G.append((i, Int(arr[0])!, arr[1]))
}

G.sort { $0.1 < $1.1 || ($0.1 == $1.1 && $0.0 < $1.0) }
for i in G.indices {
  print("\(G[i].1) \(G[i].2)")
}
*/
