
// MARK: - 국회의원 선거 1417

import Foundation

let ip = { Int(readLine()!)! }
let N = ip()
var G: [Int] = []
(0 ..< N).forEach { _ in
    G.append(ip())
}

if N == 1 { print(0); exit(0) }
var target = G.first!
var cnt = 0
var mx = 0
var arr: [Int] = Array(G[1...])

while true {
    var good = false
    arr.sort(by: >)
    if !arr.isEmpty {
        if target <= arr[0] {
            arr[0] -= 1
            target += 1
            cnt += 1
        } else {
            good = true
        }
    }

    if good {
        break
    }
}

print(cnt)
