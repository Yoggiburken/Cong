#include "Score.hpp"

Score::Score()
{
    score = 0;
}

void Score::addScore()
{
    score++;
}

int Score::getScore()
{
    return score;
}
