#include <iostream>
#include "Shiritori.h"

int main() {
    Shiritori game;
    std::cout << "Start a new game: " << game.restart() << std::endl;
    std::cout << "Play word: " << game.play("word")[0] << std::endl;
    std::cout << "Play dowry: " << game.play("dowry")[0] << std::endl;
    std::cout << "Play serpent: " << game.play("serpent")[0] << std::endl;
    std::cout << "Words played: ";
    for (std::string word : game.printWords()) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
    std::cout << "Play hive: " << game.play("hive")[0] << std::endl;
    std::cout << "Game over: " << game.game_over << std::endl;
    return 0;
}
