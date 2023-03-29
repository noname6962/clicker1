#include "game_view.h"

game_view::game_view(game_model& model) : model(model) {

}

void game_view::update()
{
  system("cls");
  cout << "Console clicker!" << std::endl;
  cout << "Points: " << this->model.get_points() << std::endl;
  cout << "level: " << this->model.get_level() << endl;
  cout << endl;

  if (this->model.get_points() >= 1000)
  {
	  cout << "shop: " << endl;
		  cout << "1. 5x bonus cost 1000 poinst " << endl;
  }
}


