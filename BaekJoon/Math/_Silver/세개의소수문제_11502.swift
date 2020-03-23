
// MARK: - 세개의소수문제
// MARK: math swift 문제풀이

/*
let T = Int(readLine()!)!
let MAX = 2001
var P = [Bool](repeating: true, count: MAX)
for i in 0...1 { P[i] = false }
var PV = [Int]()
var i = 2, j = i+i
while i*i < MAX {
    if P[i] == true {
        j = i+i
        while j < MAX {
            P[j] = false
            j += i
        }
    }
    i += 1
}

for i in 2..<MAX {
    if P[i] == true { PV.append(i) }
}

let pvLen = PV.count

for _ in 0..<T {
    let N = Int(readLine()!)!
    var finished = false
    for i in PV.indices {
        for j in i..<pvLen {
            for k in j..<pvLen {
                if PV[i] + PV[j] + PV[k] == N { print("\(PV[i]) \(PV[j]) \(PV[k])"); finished = true; break }
            }
            if finished { break }
        }
        if finished { break }
    }
    if !finished { print(0) }
}
*/
