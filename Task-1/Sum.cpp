//
//  Primes.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//

#include<iostream>
using namespace std;


int sum(int n) {
    if (n == 1) {
        return n;
    }
    return sum(n - 1) + n;
}



