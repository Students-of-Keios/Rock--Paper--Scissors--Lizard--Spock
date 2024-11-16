#include <iostream>

int main() {
    srand(time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;
    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Bua \n";
    std::cout << "2) Bao \n";
    std::cout << "3) Keo \n";
    std::cout << "shoot! \n";
    std::cin >> user;
    std::cout << computer;
    if (computer == 1 && user == 1) {
        std::cout << " tie!";
    } else if (computer == 2 && user == 2) {
        std::cout << " tie!";
    } else if (computer == 3 && user == 3) {
        std::cout << " tie!";
    } else if (computer == 1 && user == 3) {
        std::cout << " computer wins!!";
    } else if (computer == 2 && user == 1) {
        std::cout << " computer wins!!";
    } else if (computer == 3 && user == 2) {
        std::cout << " computer wins!!";
    } else if (user == 1 && computer == 3) {
        computer -= 1;
        std::cout << " computer wins!!";
    } else if (user == 2 && computer == 1) {
        computer += 2;
        std::cout << " computer wins!!";
    } else if (user == 3 && computer == 2) {
        computer -= 1;
        std::cout << " computer wins!!";
    }

    // DONE ROCK ALWAYS WIN
}
