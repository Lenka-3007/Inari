#pragma once

#include <string>

struct Attack {
    std::string name;
    int damage;
    float range;

    Attack(const std::string& name, int damage, float range)
        : name(name), damage(damage), range(range) {}
};
