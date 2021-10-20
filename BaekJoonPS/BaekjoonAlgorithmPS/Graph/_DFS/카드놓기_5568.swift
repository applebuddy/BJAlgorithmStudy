
// MARK: - 카드놓기 5568
// MARK: DFS swift 문제풀이

/*
let N = Int(readLine()!)!
let K = Int(readLine()!)!
var arr = [String]()
var dic = [String:Int]()
var chk = [Int](repeating: 0, count: 101)

for _ in 0..<N {
    arr.append("\(readLine()!)")
}

func DFS(_ str: String, _ cnt: Int) {
    if cnt >= K {
        dic[str] = 1
        return
    }
    
    for i in arr.indices {
        if chk[i] == 1 { continue }
        chk[i] = 1
        let nS = "\(str)\(arr[i])"
        DFS(nS, cnt+1)
        chk[i] = 0
    }
}

DFS("",0)
print(dic.count)
*/
