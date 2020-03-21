
// MARK: - 크로스워드 퍼즐 9626
// MARK: 구현 swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
let U = arr2[0], L = arr2[1], R = arr2[2], D = arr2[3]
var text = [[Character]](repeating: [Character](), count: N)
for i in 0..<N {
    text[i] = Array(readLine()!)
}

let tile1 = "#.", tile2 = ".#"
let _tile1 = "#", _tile2 = "."
var flag = false
var SV = [[Character]](repeating: [Character](), count: N+U+D)
var idx = 0
for i in 0..<U+N+D {
    var S = "\([String](repeating: flag ? tile2 : tile1, count: (L+R+M)/2).joined())"
    if (L+R+M) & 1 == 1 {
        S += "\(flag ? _tile2 : _tile1)"
    }
    SV[i] = Array(S)
    flag = flag == false ? true : false
}

idx = 0
var jdx = 0
for i in U..<U+N {
    for j in L..<L+M {
        SV[i][j] = text[idx][jdx]
        jdx += 1
    }
    idx += 1
    jdx = 0
}

for i in SV.indices {
    print(SV[i].map { String($0) }.joined())
}
*/
