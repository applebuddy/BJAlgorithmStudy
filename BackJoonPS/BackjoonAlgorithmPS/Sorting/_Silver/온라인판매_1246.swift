
// MARK: - 온라인판매 1246

// MARK: swift 문제풀이

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var list = [Int]()
var mx = 0, Ans = 0

(0 ..< K).forEach { _ in
    list.append(Int(readLine()!)!)
}

list.sort()
for idx in list.indices {
    let now = min(N, list.count - idx) * list[idx]
    if now > mx {
        mx = now
        Ans = list[idx]
    }
}

print("\(Ans) \(mx)")
