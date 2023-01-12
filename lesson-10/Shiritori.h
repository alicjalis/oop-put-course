//
// Created by alicj on 12.01.2023.
//

#ifndef LESSON_10_SHIRITORI_H
#define LESSON_10_SHIRITORI_H


#include <vector>
#include<bits/stdc++.h>
class Shiritori {
public:
    std::vector<std::string> words;
    bool game_over;

    Shiritori() {
        game_over = false;
    }

    std::vector<std::string> play(std::string word) {
        if (game_over) return {"game over"};
        if (words.size() > 0 && word[0] != words.back().back()) {
            game_over = true;
            return {"game over"};
        }
        if (std::find(words.begin(), words.end(), word) != words.end()) {
            game_over = true;
            return {"game over"};
        }
        words.push_back(word);
        return words;
    }

    std::string restart() {
        words.clear();
        game_over = false;
        return "game restarted";
    }

    std::vector<std::string> printWords() {
        return words;
    }
};


#endif //LESSON_10_SHIRITORI_H
