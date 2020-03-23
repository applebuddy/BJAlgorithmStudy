
// MARK: - 키큰사람 11292
// MARK: Sort swift 문제풀이

/*
while true {
    let N = Int(readLine()!)!
    if N == 0 { break }
    var G = [(Int, String, Double)]()
    for i in 0..<N {
        let arr = readLine()!.split(separator: " ").map { String($0) }
        G.append((i, arr[0], Double(arr[1])!))
    }
    
    G.sort { $0.2 > $1.2 || ($0.2 == $1.2 && $0.0 < $1.0) }
    let mx = G.first!.2
    var Ans = [String]()
    for i in G.indices {
        if G[i].2 == mx { Ans.append(G[i].1) }
    }
    print(Ans.joined(separator: " "))
}
*/
