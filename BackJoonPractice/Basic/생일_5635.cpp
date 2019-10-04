//
//  생일_5635.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 생일_5635

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person {
public:
    string name;
    int day;
    int month;
    int year;
    Person(string n, int d, int m, int y) {
        this->name = n;
        this->day = d;
        this->month = m;
        this->year = y;
    }
};

void theBirthDay() {
    int T; cin>>T;
    vector<Person> pv(T,Person("",0,0,0));
    for(int i=0; i<T; i++) cin>>pv[i].name>>pv[i].day>>pv[i].month>>pv[i].year;
    sort(pv.begin(), pv.end(), [](const Person &a, const Person &b) {
        if(a.year > b.year) return false;
        else if(a.year == b.year) {
            if(a.month > b.month) return false;
            else if(a.month == b.month) {
                if(a.day > b.day) return false;
            }
        }
        return true;
    });
    
    printf("%s\n%s\n",pv.back().name.c_str(),pv[0].name.c_str());
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theBirthDay();
//    return 0;
//}
