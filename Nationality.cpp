//
// Created by murre on 7/14/20.
//

#include "Nationality.h"
#include <iostream>

void Nationality::printNationalities() {
    for (int i = 0; i < NATIONALITIES->size(); i++) {
        std::cout << NATIONALITIES[i] << ", ";
    }
}

bool Nationality::check_for_matching_nationality(const std::string& userInput) {
    bool b = false;
    for (int i = 0; i < NATIONALITIES->size(); i++) {
        if (userInput == NATIONALITIES[i]) {
            b = true;
        }
    }

    return b;
}

void Nationality::witch_nationality_answering(const std::string& nationality) {
    std::string temp;
    if (nationality == "british") {

    }
}


