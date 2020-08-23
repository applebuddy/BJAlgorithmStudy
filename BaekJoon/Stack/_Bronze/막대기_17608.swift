
// MARK: - 막대기 17608

// MARK: Stack swift 문제풀이

func theStick_17608() {
    let ip = { Int(readLine()!)! }
    let N = ip()
    var stack: [Int] = []
    
    (0 ..< N).forEach { _ in
        let now = ip()
        while !stack.isEmpty, stack.last! <= now {
            stack.removeLast()
        }
        
        stack.append(now)
    }
    
    print(stack.count)
}


