#include<iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isPalindrome(string input) {
    int length = input.length();
    int mid = length / 2;
    int counter = 0;
    int i = 0;
    stack<char> st;
    
   
    
    if (length % 2 != 0) {
        i += 1;
    }
    
    for (int i = 0; i < mid; i++) {
        st.push(input[i]);
    }
    
    for (int j = mid + i; j < length; j++) {
        if (input[j] == st.top()) {
            counter += 1;
            st.pop();
        } else {
            break;
        }
    }
    if (counter == mid) {
        return true;
    } else {
        return  false;
    }
    
}

int main() {
    if (isPalindrome("lol")) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
    return 0;
}

