
// MARK: - 0의 개수

// MARK: bruteForce swift 문제풀이

private func countOfZero_11170() {
    let N = Int(readLine()!)!
    (0 ..< N).forEach { _ in
        let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
        let from = arr[0], to = arr[1]
        var cnt = 0
        (from ... to).forEach {
            var num = $0
            cnt += num == 0 ? 1 : 0
            while num > 0 {
                if num % 10 == 0 { cnt += 1 }
                num /= 10
            }
        }
        print(cnt)
    }
}
