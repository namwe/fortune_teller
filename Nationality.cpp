//
// Created by murre on 7/14/20.
//

#include "Nationality.h"
#include <iostream>

void Nationality::printNationalities() {
    for (int i = 0; i < NATIONALITIES->size(); i++) {
        std::cout << NATIONALITIES[i] << ", ";
    }
    std::cout << std::endl;
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
    std::string answer = nationalitySelect(nationality);
    std::cout << answer << std::endl << std::endl;
}

std::string Nationality::nationalitySelect(const std::string &nationality) {
    std::string temp;
    if (nationality == "british") {
        temp = "Hmmmm.... Grab a cup of tea and a biscuit then.";
    } else if (nationality == "american") {
        temp = "Let's see how much of a number #1 you will be after this session.... Hehehe";
    } else if (nationality == "indian") {
        temp = "A tech genius maybe? We will see.... hehehe";
    } else if (nationality == "chinese") {
        temp = "I see you have come from far far east in order to meet me.....";
    } else if (nationality == "vietnamese") {
        temp = "Are you not scared? Are you Pho real?";
    } else if (nationality == "swedish") {
        temp = "I see. Where did you park your long ship, viking?";
    } else if (nationality == "german") {
        temp = "Forget all about Konigsberg, look at the fortune ball.";
    } else if (nationality == "french") {
        temp = "Alright.... just don't surrencer.... hehehe";
    }
    return temp;
}


