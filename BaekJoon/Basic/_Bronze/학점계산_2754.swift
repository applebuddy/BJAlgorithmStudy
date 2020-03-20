
// MARK: - 학점계산 2754
// MARK: enum활용 swift 문제풀이

/*
enum Score: String {
    case ap = "A+", a0 = "A0", am = "A-"
    , bp = "B+", b0 = "B0", bm = "B-"
    , cp = "C+", c0 = "C0", cm = "C-"
    , dp = "D+", d0 = "D0", dm = "D-"
    , f = "F"
    
    var value: Double {
        switch self {
            case .ap: return 4.3
            case .a0: return 4.0
            case .am: return 3.7
            case .bp: return 3.3
            case .b0: return 3.0
            case .bm: return 2.7
            case .cp: return 2.3
            case .c0: return 2.0
            case .cm: return 1.7
            case .dp: return 1.3
            case .d0: return 1.0
            case .dm: return 0.7
            case .f: return 0.0
        }
    }
}

let score = readLine()!
let Ans = Score(rawValue: score)!.value
print(Ans)
*/
