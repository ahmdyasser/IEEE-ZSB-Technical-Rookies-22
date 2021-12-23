#include<iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int minDistance(vector<int> arr) {
    int counter = 0;
    int max;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            counter += 1;
            if (arr[i] == arr[j]) {
                if (max > counter) {
                    max = counter;
                }
                counter = 0;
            }
        }
    }
    return max;
}

int main() {
    cout << minDistance({2,5,3,4,5,2});
    return 0;
}

