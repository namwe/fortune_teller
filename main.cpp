#include <iostream>
#include <strings.h>
#include <cstring>
#include "Nationality.h"

void printTeller();
void start();
void part_one();
void part_two();
std::string input_to_lowercase(const std::string& answer);
std::string correctingInput();

int main() {
    start();
    return 0;


}

void start() {
    printTeller();
    part_one();
    part_two();
}

std::string input_to_lowercase(const std::string& answer) {
    // This function turns the input string into lower case //

    int counter = 0;
    char str[answer.length() + 1];
    std::strcpy(str, answer.c_str());
    char c;

    while (str[counter]) {
        c = str[counter];
        str[counter] = tolower(c);
        counter++;
    }

    return str;

}

void printTeller() {
    std::cout << "                     .---.\n"
                 "                   .'_..._'.\n"
                 "                  .''_   _''.\n"
                 "                 .' :  '  : '.\n"
                 "                .'_.-'_~_'-._'.\n"
                 "               .'(     '     )'.\n"
                 "              .'  \\ \\     / /  '.\n"
                 "             .'    \\ \\   / /    '.\n"
                 "       ____________'''` '```____________\n"
                 "      /              .''.               \\\n"
                 "     /              (  ` )               \\\n"
                 "    /               .'..'.                \\\n"
                 "   /                '----'                 \\\n"
                 "  /_________________________________________\\\n"
                 "    \\  /'--'                       '--'\\  /\n"
                 "     ||                                 ||\n"
                 "     ||                                 ||\n"
                 "    _||_                               _||_\n"
                 "    '--'                               '--' " << std::endl;

    std::cout << "  __           _                    \n"
                 " / _|         | |                   \n"
                 "| |_ ___  _ __| |_ _   _ _ __   ___ \n"
                 "|  _/ _ \\| '__| __| | | | '_ \\ / _ \\\n"
                 "| || (_) | |  | |_| |_| | | | |  __/\n"
                 "|_| \\___/|_|   \\__|\\__,_|_| |_|\\___|" << "\n" << " _       _ _           \n"
                                                                      "| |     | | |          \n"
                                                                      "| |_ ___| | | ___ _ __ \n"
                                                                      "| __/ _ \\ | |/ _ \\ '__|\n"
                                                                      "| ||  __/ | |  __/ |   \n"
                                                                      " \\__\\___|_|_|\\___|_|   \n"
                                                                      "                     " << std::endl;
}

void part_one() {
    std::cout << "Hi, my name is Serafina. I will look into your future. Do you dare continuing?[Yes/No]" << std::endl;
    std::string answer = correctingInput();

    if (answer == "no") {
        std::cout << "Hmph.... coward!!!!" << std::endl;
        exit(0);
    }

    while (answer != "yes") {
        std::cout << "Type in yes or no" << std::endl;
        std::cin >> answer;
        answer = input_to_lowercase(answer);

        if (answer == "no") {
            std::cout << "Hmph.... coward!!!!" << std::endl;
            exit(0);
        }
    }
}

void part_two() {
    Nationality nationality;
    bool isInList = false;
    int counter = 0;
    std::cout << "Tell me your nationality.......!" << std::endl;
    do {
        if (counter > 0) {
            std::cout << "You will have to pardon me, my fortune telling is limited to these nationalities: " << std::endl;
            nationality.printNationalities();
        }
        std::string answer = correctingInput();
        isInList = nationality.check_for_matching_nationality(answer);
        counter++;
    } while (!isInList);




}

std::string correctingInput() {
    std::string answer;
    std::cin >> answer;
    answer = input_to_lowercase(answer);
    return answer;
}
