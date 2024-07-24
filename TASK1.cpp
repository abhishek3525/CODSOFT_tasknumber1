//                  TASK 1 :- NUMBER GUESSING GAME
#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 1 and 100
    int Guessing_Number = rand() % 100 + 1;
    
    int guess;
    int tries = 0;
    
    cout << "Welcome to the NUMBER GUESSING GAME\n";
    cout << "Select a number between 1 to 100.\n";
    
    do {
        // Ask the user to guess the number
        cout << "Enter your guess: ";
        cin >> guess;
        
        tries++;
        
        // Provide feedback based on the guess
        if (guess < Guessing_Number) {
            cout << "Too low! Try again.\n";
        } else if (guess > Guessing_Number) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number " << Guessing_Number << " correctly!\n";
            cout << "Number of tries: " << tries << "\n";
        }
        
    } while (guess != Guessing_Number);
    
    return 0;
}