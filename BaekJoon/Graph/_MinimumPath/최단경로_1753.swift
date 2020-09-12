
// MARK: - 최단경로 1753

// MARK: Dijkstra swift 문제풀이

// MARK: JSH Heap 사용

public struct Heap<T> {
    var nodes: [T] = []
    let comparer: (T, T) -> Bool

    var isEmpty: Bool {
        return nodes.isEmpty
    }

    init(comparer: @escaping (T, T) -> Bool) {
        self.comparer = comparer
    }

    func peek() -> T? {
        return nodes.first
    }

    mutating func insert(_ element: T) {
        var index = nodes.count

        nodes.append(element)

        while index > 0, !comparer(nodes[index], nodes[(index - 1) / 2]) {
            nodes.swapAt(index, (index - 1) / 2)
            index = (index - 1) / 2
        }
    }

    mutating func delete() -> T? {
        guard !nodes.isEmpty else {
            return nil
        }

        if nodes.count == 1 {
            return nodes.removeFirst()
        }

        let result = nodes.first
        nodes.swapAt(0, nodes.count - 1)
        _ = nodes.popLast()

        var index = 0

        while index < nodes.count {
            let left = index * 2 + 1
            let right = left + 1

            if right < nodes.count {
                if comparer(nodes[left], nodes[right]),
                    !comparer(nodes[right], nodes[index]) {
                    nodes.swapAt(right, index)
                    index = right
                } else if !comparer(nodes[left], nodes[index]) {
                    nodes.swapAt(left, index)
                    index = left
                } else {
                    break
                }
            } else if left < nodes.count {
                if !comparer(nodes[left], nodes[index]) {
                    nodes.swapAt(left, index)
                    index = left
                } else {
                    break
                }
            } else {
                break
            }
        }

        return result
    }
}

extension Heap where T: Comparable {
    init() {
        self.init(comparer: <)
    }
}

// MARK: 실제 작성 코드

typealias Pair = (Int, Int)
let INF = Int.max
var DV = [Int](repeating: Int.max, count: 20001)
var EV = [[Pair]](repeating: [Pair](), count: 20001)

func dijkstra(_ start: Int) {
    var heap = Heap<(Int, Int)> {
        $0.1 > $1.1
    }

    heap.insert((start, 0))
    while !heap.isEmpty {
        let current = heap.peek()!.0
        let distance = heap.peek()!.1
        heap.delete()
        (0 ..< EV[current].count).forEach {
            let next = EV[current][$0].0
            let nextDistance = EV[current][$0].1 + distance
            if nextDistance < DV[next] {
                DV[next] = nextDistance
                heap.insert((next, nextDistance))
            }
        }
    }
}

let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
let V = arr[0], E = arr[1]
let D = Int(readLine()!)!
(0 ..< E).forEach { _ in
    let arr2 = readLine()!.split(separator: " ").map { Int(String($0))! }
    let u = arr2[0], v = arr2[1], w = arr2[2]
    EV[u].append((v, w))
}

DV[D] = 0
dijkstra(D)
(1 ... V).forEach {
    if DV[$0] < INF { print("\(DV[$0])") }
    else { print("INF") }
}
