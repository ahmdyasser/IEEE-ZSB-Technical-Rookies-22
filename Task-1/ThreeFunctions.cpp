//
//  Primes.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//

#include<iostream>
using namespace std;

int s = 10;

//1
void sumInArrForLoop(int arr[s]) {
    int sum = 0;
    for (int i = 0; i < s; i++) {
        sum += arr[i];
    }
    cout << sum << "\n";
}

//2
void sumInArrWhileLoop(int arr[s]) {
    int sum = 0;
    int i = 0;
    while (i < s) {
        sum += arr[i];
        i += 1;
    }
    cout << sum << "\n";
}

//3
int sumInArrRecursion(int arr[], int i) {
    if (i <= 0) {
        return 0;
    }
    return sumInArrRecursion(arr, i - 1) + arr[i - 1];
}
