
// MARK: - Password 11293
// MARK: Implementation swift 문제풀이

/*
let T = Int(readLine()!)!

for t in 1...T {
    print("Customer \(t)")
    
    let N = Int(readLine()!)!
    var PV = [[String]](repeating: [String](), count: N+1)
    for i in 1...N {
        let pwd = readLine()!.map { String($0) }.filter { $0 != " " }
        PV[i] = pwd
    }
    
    let tc = Int(readLine()!)!
    for _ in 0..<tc {
        let arr = readLine()!.split(separator: " ").map { String($0) }
        let idx = Int(arr[0])!, c1 = Int(arr[1])!, c2 = Int(arr[2])!
        let s1 = arr[3], s2 = arr[4]
        if PV[idx][c1-1] == s1 && PV[idx][c2-1] == s2 { print("correct") }
        else { print("error") }
    }
}
*/
