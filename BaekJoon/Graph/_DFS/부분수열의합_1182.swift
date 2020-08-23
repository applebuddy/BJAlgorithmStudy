
// MARK: - 부분수열의 합 1182

// MARK: DFS swift 문제풀이

func sumOfSubarray_1182() {
    let ip = { readLine()!.split(separator: " ").map { Int(String($0))! } }
    let ar = ip()
    let N = ar[0], K = ar[1]
    let S = ip()
    var cnt = 0

    func DFS(_ idx: Int, _ sum: Int) {
        if idx >= S.count {
            if sum == K {
                cnt += 1
            }
            return
        }

        DFS(idx + 1, sum)
        DFS(idx + 1, sum + S[idx])
    }

    DFS(0, 0)
    print(K == 0 ? cnt - 1 : cnt)
}
