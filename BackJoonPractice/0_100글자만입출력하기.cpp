//
//  0_100글자만입출력하기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 26/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <stdio.h>

int main(){
    char str[101];
    
    while(fgets(str,102,stdin)){
        printf("%s",str);
    }
    
    return 0;
}
