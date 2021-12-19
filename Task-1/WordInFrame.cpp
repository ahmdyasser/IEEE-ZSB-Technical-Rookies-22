//
//  Primes.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//

#include<iostream>
#include <string>

using namespace std;

void drawFrame() {
    int width, height = 2, spaces, counter = 0, maxValue = 0, letterIndex = 0;
    string input;
    
    getline(cin, input);
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            spaces += 1;
            if (counter > maxValue) {
                maxValue = counter;
            }
            counter = 0;
        } else {
            counter += 1;
        }
    }
    height += spaces;
    width = maxValue + 4;
    
    for (int a = 0; a < height; a++) {
        for (int b = 0; b < width; b++) {
            if (a == 0 || a == height - 1 || b == 0 || b == width - 1) {
                cout << "*";
            } else if ((b == 1 || b == width - 2)) {
                cout << " ";
            } else {
                if (input[letterIndex] == ' ') {
                    cout << " ";
                } else {
                    cout << input[letterIndex];
                }
                letterIndex += 1;

            }
        }
        cout << "\n";
    }
}
