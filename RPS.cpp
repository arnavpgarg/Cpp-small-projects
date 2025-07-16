#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main() {

    char player;
    char computer;

    player = getUserChoice();
    showChoice(player);

    computer = getComputerChoice();
    showChoice(computer);

    showWinner(player, computer);
    
    return 0;
}

char getUserChoice() {

    char player; //local variable.
    std::cout << "Rock-Paper-Scissors game.\n";

    do {
        std::cout << "Enter your choice-\n";
        std::cout << "********************\n";
        std::cout << "r -> Rock\n";
        std::cout << "s -> Scissors\n";
        std::cout << "p -> Paper\n";
        std::cin >> player;
        std::cout << "You chose: " << player << std::endl;

    } while(player != 'r' && player != 's' && player != 'p');

    return player;
}
char getComputerChoice() {
    char computer;

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num) {
        case 1: return 'r';
        case 2: return 's';
        case 3: return 'p';

        return 0;
    }

    std::cout << "computer chose: " << computer << std::endl;
    return computer;
}
void showChoice(char choice) {

    switch(choice) {
        case 'r': std::cout << "Rock\n";
        break;
        case 'p': std::cout << "Paper\n";
        break;
        case 's': std::cout << "Scissor\n";
        break; 
    }

}
void showWinner(char player, char computer) {

    switch(player) {
        case 'r': if(computer == 'r') {
                   std::cout << "It's a tie...\n";
        } else if (computer == 'p') {
            std::cout << "You lose :(\n";
        } else {
            std::cout  << "You win :)\n";
        }
        break;
        case 'p': if(computer == 'p') {
                   std::cout << "It's a tie...\n";
        } else if (computer == 's') {
            std::cout << "You lose :(\n";
        } else {
            std::cout  << "You win :)\n";
        }
        break;
        case 's': if(computer == 's') {
                   std::cout << "It's a tie...\n";
        } else if (computer == 'r') {
            std::cout << "You lose :(\n";
        } else {
            std::cout  << "You win :)\n";
        }
        break;
    }

}