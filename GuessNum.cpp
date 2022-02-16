#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    srand (time(NULL));
    int number = rand() % 100+1;
    int guess = 0;
    int counter = 0;

    cout << number << endl;  //debug

    do {
        cout << "Guess a number between 1 and 100\nYour Guess: ";
        cin >> guess;

        if (guess > number) { 
            counter++;
            cout << "Too High!\n" << endl; 
            }
        else if (guess < number) {
            counter++;
            cout << "Too Low!\n" << endl; 
            }
        else {
            counter++;
            cout << "Correct!" << endl;
            cout << "Number of Guesses: " << counter << endl;
            exit(0);
        } //else

    } while (number != guess);
    
return 0;
} //main

