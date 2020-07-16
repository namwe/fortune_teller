//
// Created by murre on 7/14/20.
//

#ifndef GENIE_PLAYER_H
#define GENIE_PLAYER_H
#include <iostream>


class Player {

private:
    int weight;
    int height;
    std::string name;

public:
    Player(int weight, int height, std::string name) {
        this->weight = weight;
         this->height = height;
        this->name = name;
    }
    int getWeight();
    int getHeight();

};


#endif //GENIE_PLAYER_H
