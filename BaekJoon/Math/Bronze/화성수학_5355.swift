
// MARK: - 화성수학 5355
// MARK: math swift 문제풀이

/*
let T = Int(readLine()!)!
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ")
    let len = arr.count
    var val = Double(arr[0])!
    for i in 1..<len {
        if arr[i] == "@" {
            val *= 3
        } else if arr[i] == "%" {
            val += 5
        } else if arr[i] == "#" {
            val -= 7
        }
    }
    var Ans = "\((val*100).rounded()/100)"
    let result = (val*100).rounded()/100
    if result * 10 == Double(Int(result*10)) {
        Ans += "0"
    }
    print(Ans)
}
*/
