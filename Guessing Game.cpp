#include <iostream>
#include <cstdlib>
#include <ctime>

void guessingGame() {
    // Generate a random number between 1 and 100
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    
    // Initialize the number of attempts
    int attempts = 0;
    
    std::cout << "Welcome to the guessing game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    
    while (true) {
        // Ask the user for their guess
        int userGuess;
        std::cout << "Take a guess: ";
        std::cin >> userGuess;
        
        // Check if the input is valid
        if (std::cin.fail()) {
            std::cout << "Invalid input! Please enter a whole number." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }
        
        // Increment the number of attempts
        attempts++;
        
        // Check if the user's guess is correct
        if (userGuess == numberToGuess) {
            std::cout << "Congratulations! You found the number in " << attempts << " attempts." << std::endl;
            break;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }
}

int main() {
    guessingGame();
    return 0;
}