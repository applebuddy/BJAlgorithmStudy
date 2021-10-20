
// MARK: - 무한문자열
// MARK: Implementation swift 문제풀이

/*
var A = Array(readLine()!).map { String($0) }
var B = Array(readLine()!).map { String($0) }
var al = A.count
var bl = B.count

if al < bl {
  swap(&al, &bl)
  swap(&A, &B)
}

A += A + A
B += B + B

var temp = [String]()
var right = true

for i in B.indices {
  if A[i] != B[i] { right = false; break }
}

var j = 0
for i in al-bl..<al {
  if A[i] != B[j] { right = false; break }
  j += 1
}

print(right ? 1 : 0)
*/
