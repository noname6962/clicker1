#pragma once

#include "game_model.h"
#include <iostream>

class game_view {

public:
    explicit game_view(game_model& model);
    void update();

private:

    game_model& model;

};

