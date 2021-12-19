//
//  Primes.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//

#include<iostream>
using namespace std;


int sumThreeAndFive(int n) {
  
    if (n == 1) {
        return n;
    }
    if (n % 3 == 0 || n % 5 == 0) {
        total += n;
    }
    return sumThreeAndFive(n - 1) + n;
}

void sum(int x) {
    sumThreeAndFive(x);
    cout << total;
}
