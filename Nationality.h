//
// Created by murre on 7/14/20.
//

#ifndef GENIE_NATIONALITY_H
#define GENIE_NATIONALITY_H
#include <iostream>


class Nationality {
private:
    std::string const NATIONALITIES[8] = {"british", "chinese", "swedish", "american", "vietnamese", "indian", "german", "french"};

public:
    void printNationalities();
    bool check_for_matching_nationality(const std::string& userInput);
    void witch_nationality_answering(const std::string& nationality);
};


#endif //GENIE_NATIONALITY_H
