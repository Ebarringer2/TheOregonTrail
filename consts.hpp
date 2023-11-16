// file used for creating random instances of events in the game
#include <iostream>
#include <random>

int getRand(int a, int b) 
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(a, b);
    return dis(gen);
}

struct Probs
{
    int
};
