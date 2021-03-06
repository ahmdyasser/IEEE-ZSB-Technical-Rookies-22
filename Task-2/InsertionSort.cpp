#include<iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

void insertionSort(vector<int> arr) {
    int key,i, j;
    
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
    
    
    
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr);
    return 0;
}

  
