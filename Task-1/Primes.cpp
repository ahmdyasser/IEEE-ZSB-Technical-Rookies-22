//
//  Primes.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//

#include<iostream>
using namespace std;

void primes() {
    int n;
    bool isPrime;
    cin >> n;
   
        for (int i = n; i >= 2; i--) {
            isPrime = true;
            for (int j = i/2; j >= 2; j--) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << i << " ";
            }
        
    }
}
