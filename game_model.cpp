//
// Created by student on 17.03.2023.
//

#include "game_model.h"

void game_model::start()
{
    this->points = 1;
    this->level = 1;
}

int game_model::get_points() {
    return this->points;
}

void game_model::add_points(int p) {
    this->points += p;
}

void game_model::reset_points() {
    this->points = 0;
}

int game_model::get_level()
{
    return this->level;
}

void game_model::add_level()
{
    this->level += 1;
}