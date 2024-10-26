#include <iostream>
using namespace std;
int main() {
int secretNumber = 51;
int userGuess;
cout<<"Guess the secret number between 1 and 100:\n";
do {
cout<<"Enter your guess:";
cin>>userGuess;
if (userGuess > secretNumber) {
cout << "Too high! Try again.\n";
} else if (userGuess < secretNumber) {
cout << "Too low! Try again.\n";
} else {
cout << "Congratulations! You guessed the correct number.\n";
}
} while (userGuess != secretNumber);
return 0;
}
