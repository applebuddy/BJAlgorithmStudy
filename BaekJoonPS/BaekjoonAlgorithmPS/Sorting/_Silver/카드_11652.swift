
// MARK: - 카드 11652
// MARK: Sort swift 문제풀이

/*
let N = Int(readLine()!)!
var dic = [Int:Int]()
for _ in 0..<N {
    let num = Int(readLine()!)!
    dic[num] = (dic[num] ?? 0) + 1
}
print(dic.sorted { $0.value > $1.value || ($0.value == $1.value && $0.key < $1.key) }.first!.key)
*/
