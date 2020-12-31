
// MARK: - 색상환 2482
// MARK: DP swift 문제풀이

/*
let MAX = 1001
let MOD = 1000000003

var DP = [[Int]](repeating: [Int](repeating: 0, count: MAX), count: MAX)

let N = Int(readLine()!)!
let K = Int(readLine()!)!

for i in 1...3 { DP[i][1] = i } // 1~3에서 각 1개 선택하는 경우의 수는 1/2/3 으로 미리 설정해둔다.
for i in 4...N {
    let cnt = i / 2 // 체크 시 인접하지않은 최대한의 선택을 위해 i / 2로 설정(한칸 건너띄고 선택.. 반복 ex) N == 4라면 0/2 or 1/3의 2가지(4/2) 선택이 가능
    for j in 1...cnt { // 최초 하나 선택 시의 값은 i, 이후 두개이상의 값 선택시에는 해당 색을 골랐을때, 고르지 않았을때를 나누어 계산한다.
        if j == 1 { DP[i][j] = i }
        else { DP[i][j] = (DP[i-2][j-1] + DP[i-1][j]) % MOD }
    }
}

print(DP[N][K])
*/
