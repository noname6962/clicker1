//
// Created by student on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view) {
}


void game_controller::launch() {
    int key;

    this->model.start();
    this->view.update();

    do
    {
        key = _getch();

        if (key == 13) {

            if (this->model.get_points() >= pow(this->model.get_level()*3, 2))
            {
                this->model.add_level();
                this->model.reset_points();
            }

            this->model.add_points(this->model.get_level());
            this->view.update();
        }
    }
    while (key != 27);
}


