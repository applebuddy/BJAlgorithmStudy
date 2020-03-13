
// MARK: - 돌게임3 9657

// MARK: DP swift 숏코딩 문제풀이
/*
let N=Int(readLine()!)!%7;print(N==0||N==2 ? "CY":"SK")
*/

// MARK: DP swift 문제풀이

/*
var DP=[0,0,1,0,0];let N=Int(readLine()!)!;if N>4{for i in 5...N{if DP[i-4]==1||DP[i-3]==1||DP[i-1]==1{DP.append(0)}else{DP.append(1)}}};print(DP[N]==0 ?"SK":"CY")
*/
