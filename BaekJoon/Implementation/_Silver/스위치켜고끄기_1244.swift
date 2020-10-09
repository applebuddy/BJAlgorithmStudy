
// MARK: - 스위치 켜고 끄기 1244

// MARK: Implementation swift 문제풀이

import Foundation

let ip = { readLine()! }
let N = Int(ip())!
var G = ip().components(separatedBy: " ")
let K = Int(ip())!

extension Array where Element == String {
    mutating func toggleValue(_ idx: Int) {
        self[idx] = self[idx] == "0" ? "1" : "0"
    }
}

(0 ..< K).forEach { _ in
    let arr = ip().components(separatedBy: " ")
    let gen = arr[0]
    let num = Int(arr[1])!
    var idx = num - 1
    if gen == "1" {
        while idx < G.count {
            G.toggleValue(idx)
            idx += num
        }
    } else {
        G.toggleValue(idx)
        var left = idx - 1
        var right = idx + 1
        while left >= 0, right < G.count, G[left] == G[right] {
            G.toggleValue(left)
            G.toggleValue(right)
            left -= 1
            right += 1
        }
    }
}

var result = [[String]]()
var rowList = [String]()
var prev = 0
for idx in G.indices {
    rowList.append(G[idx])
    if prev < (idx + 1) / 20 {
        prev = (idx + 1) / 20
        result.append(rowList)
        rowList = []
    }
}

result.append(rowList)

result.forEach {
    if $0.isEmpty { return }
    print($0.joined(separator: " "))
}
