#include <iostream>
#include <cmath>
using namespace std;
int N=0,M=0,MAX=0;
int num[51][51];

void checkRect(int i, int j){
    // N은 높이(Y), M은 너비(X)
    for(int k=0; (i+k<=N)&&(j+k<=M); k++){
        if(num[i][j]==num[i+k][j] && num[i+k][j]==num[i+k][j+k] && num[i+k][j+k]==num[i][j+k] && num[i][j+k]==num[i][j]){
            MAX = max(MAX,(k+1)*(k+1));
        }
    }
}

int main(){

    scanf("%d %d",&N,&M); // N은 높이(Y), M은 너비(X)
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            scanf("%1d",&num[i][j]);
        }
    }
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            checkRect(i,j);
        }
    }
    
    printf("%d",MAX);
    
    return 0;
}
