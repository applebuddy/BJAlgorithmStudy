#include <iostream>
using namespace std;

int getGCD(int a, int b){
    if (b == 0){
        return a;
    } else {
        return getGCD(b,a%b);
    }
}
int getLCM(int a, int b){
    return a*b/getGCD(a,b);
}

int main() {
    int n;
    cin >> n; // 몇번을 구할지 입력받는다.
    int *arr = new int[n];
    
    for(int i=0; i<n; i++){ // n번을 입력받는다.
        int a=0,b=0;
        cin >> a >> b;
        arr[i] = getLCM(a,b);
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    
    delete[] arr;
    return 0;
}
