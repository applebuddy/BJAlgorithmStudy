
// MARK: - 비슷한 단어 2607

// MARK: ascii 활용 swift 문제풀이

/*
let T = Int(readLine()!)!
let key = Array(readLine()!)
var dic = [Int](repeating: 0, count: 26)
for i in key.indices {
    let ascii = Int(key[i].unicodeScalars.first!.value) - 65
    dic[ascii] += 1
}
var tDic = dic
var Ans = 0
for _ in 0..<T-1 {
    let comp = Array(readLine()!)
    for i in comp.indices {
        let ascii = Int(comp[i].unicodeScalars.first!.value) - 65
        tDic[ascii] -= 1
    }
    
    var mn = 0, pl = 0
    for i in tDic.indices {
        if tDic[i] == 0 { continue }
        if tDic[i] > 0 { pl += tDic[i] }
        else { mn -= tDic[i] }
    }
    
    if mn <= 1 && pl <= 1 { Ans += 1 }
    tDic = dic
}

print(Ans)
*/

// MARK: Hash swift 문제풀이
// Dictionary 를 사용했지만 ascii값을 통해 더 효율적으로 짤 수 있겠다.

/*
let T = Int(readLine()!)!
let key = Array(readLine()!)
var dic = [Character:Int]()
for i in key.indices {
    dic[key[i]] = (dic[key[i]] ?? 0) + 1
}
var tDic = dic
var Ans = 0
for _ in 0..<T-1 {
    let comp = Array(readLine()!)
    for i in comp.indices {
        tDic[comp[i]] = (tDic[comp[i]] ?? 0) - 1
    }
    
    var mn = 0, pl = 0
    for (_,value) in tDic {
        if value == 0 { continue }
        if value > 0 { pl += value }
        else { mn -= value }
    }
    
    if mn <= 1 && pl <= 1 { Ans += 1 }
    tDic = dic
}

print(Ans)
*/
