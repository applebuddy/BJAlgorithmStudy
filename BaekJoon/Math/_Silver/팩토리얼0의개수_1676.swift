
// MARK: - 팩토리얼 0의 개수 1676

// MARK: math swift 문제풀이

func getFactorialZeroCount() {
    let N = Int(readLine()!)!
    var cnt = 0
    var five = 5

    while five <= N {
        cnt += N / five
        five *= 5
    }

    print(cnt)
}
