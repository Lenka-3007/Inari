#include <string>

struct Player {
    std::string name;
    int score;
    int level;

    Player(const std::string& name, int score, int level)
        : name(name), score(score), level(level) {}
};