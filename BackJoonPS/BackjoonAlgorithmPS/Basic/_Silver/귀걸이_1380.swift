
// MARK: - 귀걸이 1380

// MARK: swift 문제풀이

typealias Pair = (String, Int)
var cnt = 1
while true {
    let ip = { readLine()! }
    let N = Int(ip())!
    if N == 0 { break }
    var list = [Pair]()
    (0 ..< N).forEach { _ in
        list.append((ip(), 0))
    }

    (0 ..< N * 2 - 1).forEach { _ in
        let arr = ip().split(separator: " ")
        let num = Int(arr[0])!
        list[num - 1].1 += 1
    }

    for value in list {
        if value.1 == 1 { print("\(cnt) \(value.0)"); break }
    }

    cnt += 1
}
