//
// Created by murre on 7/15/20.
//

#include "Fortune.h"

std::string Fortune::print_results() {
    //std::srand((unsigned int)time(nullptr));
    int randomNumber = rand() % 8;
    return fortunes[randomNumber];
}
