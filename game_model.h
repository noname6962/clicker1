//
// Created by student on 17.03.2023.
//

#ifndef EXAMPLEMVC_GAME_MODEL_H
#define EXAMPLEMVC_GAME_MODEL_H

using namespace std;

class game_model {

public:

    void start();
    int get_points();
    void add_points(int p);
    void reset_points();
    //za ka¿dy level gracz dostaje +1pkt za klikniecie
    int get_level();
    void add_level();
    //gracz moze dokupic mno¿niki pkt per klik w sklepie
    void mod_multiplier(int m);
    int get_multiplier();
    void shop(int price);

private:

    int points;
    int level;
    int multiplier;
};


#endif //EXAMPLEMVC_GAME_MODEL_H
