#include<iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;


void removeDuplicates(vector<int> arr) {
    set<int> awesomeSet;
    
    for (int i = 0; i < arr.size(); i++) {
        awesomeSet.insert(arr[i]);
    }
    
    for (auto it = awesomeSet.begin(); it != awesomeSet.end(); it++) {
        cout << *it;
    }
}
int main() {
    removeDuplicates({1,1,1,1,2,2,2,3,3});
    return 0;
}


