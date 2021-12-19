//
//  BinarySearch.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//
#include<iostream>
using namespace std;

void binarySearch(int x) {
    int arr[] = {1,2,3,4,5,6,7,12,31};
    int size = sizeof(arr)/sizeof(arr[0]);
    int startIndex = 0 ;
    int endIndex = size - 1;
    
    while (startIndex <= endIndex) {
        int midIndex = (startIndex + endIndex) / 2;
        if (x > arr[midIndex]) {
            startIndex = midIndex + 1;
        } else if (x < arr[midIndex]) {
            endIndex = midIndex - 1;
        } else {
            cout << midIndex << endl;
            break;
        }
    }
}
