
// MARK: - 비슷한 단어 2607
// MARK: swift 문제풀이
// Dictionary 를 사용했지만 ascii값을 통해 더 효율적으로 짤 수 있겠다.
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
