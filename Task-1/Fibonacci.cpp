//
//  Primes.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//

#include<iostream>
using namespace std;


void fibonacci(int n) {
    int a = 0,b = 1,c;
    
    cout << a << " ";
    cout << b << " ";

    for (int i = 0; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}


