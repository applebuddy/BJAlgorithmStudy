
// MARK: - 도비의 영어공부 2386

// MARK: swift 문제풀이

while let input = readLine() {
    let S = Array(input)
    let fs = S[0]
    let tgt = Int(fs.asciiValue!)
    let tgt2 = tgt < 97 ? tgt + 32 : tgt - 32
    var cnt = 0
    if input == "#" { break }
    for idx in 2 ..< S.count {
        let ascii = Int(S[idx].asciiValue!)
        if ascii == tgt || ascii == tgt2 { cnt += 1 }
    }
    print("\(fs) \(cnt)")
}
