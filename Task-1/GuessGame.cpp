//
//  Primes.cpp
//  cppPractice
//
//  Created by Ahmad Yasser on 18/12/2021.
//

#include<iostream>
using namespace std;

void guessGame() {
    int input;
    int counter = 0;
    int randomNum = rand() % 11;
   
    while (input != randomNum) {
        cout << "enter your guess from 0-10: ";
        cin >> input;
        counter += 1 ;
       
        if (input == randomNum) {
            cout << "you got it right!\n";
            cout << "your number of tries are: " << counter << "\n\n";
            break;
        }
        cout << "wrong! guess again\n";
        cout << "your number of tries are: " << counter << "\n\n";
    }
    
}

