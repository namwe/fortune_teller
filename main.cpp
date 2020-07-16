#include <iostream>
#include <strings.h>
#include <cstring>
#include <vector>
#include <fstream>
#include "Nationality.h"
#include "Fortune.h"
void printTeller();
void start();
void part_one();
void part_two();
void part_three();
void part_four();
bool isNumber(const std::string& string);
std::string input_to_lowercase(const std::string& answer);
std::string correctingInput();
std::vector<std::string> results;

int main() {
    start();
    return 0;

}

void start() {
    printTeller();
    part_one();
    part_two();
    part_three();
    part_four();
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
    std::string answer;
    std::cout << "Tell me your nationality.......!" << std::endl;
    do {
        if (counter > 0) {
            std::cout << "You will have to pardon me, my fortune telling is limited to these nationalities: " << std::endl;
            nationality.printNationalities();
        }
        answer = correctingInput();
        isInList = nationality.check_for_matching_nationality(answer);
        counter++;
    } while (!isInList);

    nationality.witch_nationality_answering(answer);
    results.push_back(answer);



}

void part_three() {
    std::string name;
    std::string age;
    bool progressing = false;
    while (!progressing) {
        try {
            std::cout << "What is your name?" << std::endl;
            std::cin >> name;
            while (isNumber(name)) {
                std::cout << "Illegal type of name...... Try again!" << std::endl;
                std::cout << "What is your name?" << std::endl;
                std::cin >> name;
            }
            std::cout << "Your age?" << std::endl;
            age = correctingInput();
            int ageInt = std::stoi(age);

            if (ageInt > 0 && ageInt <= 18) {
                std::cout << "Still so young...." << std::endl;
            } else if (ageInt > 18 && ageInt <= 30) {
                std::cout << "You are getting older.... Spend your time well." << std::endl;
            } else if (ageInt > 30) {
                std::cout << "I see, old man. Please, enjoy your time here.... he he he" << std::endl;
            }
            progressing = true;
        }
        catch (const std::invalid_argument &argument) {
            progressing = false;
            std::cout << "Illegal input, try again." << std::endl << std::endl;
        }
    }

    results.push_back(name);
    results.push_back(age);
    

}

void part_four () {
    Fortune fortune;
    std::string theFortune = fortune.print_results();
    results.push_back(theFortune);

    std::cout << std::endl;
    std::cout << results[3] << std::endl;

    std::cout << "Would you like to save your results? [Yes/No]";
    std::string answer = correctingInput();

    if (answer == "yes") {
        std::ofstream resultsFile("results.txt");
        if (resultsFile.is_open()) {
            resultsFile << "Your name is: " + results[1] << std::endl;
            resultsFile << "Your age is: " + results[2] << std::endl;
            resultsFile << "Your nationality is: " + results[0] << std::endl << std::endl << std::endl;
            resultsFile << results[3] << std::endl;
            resultsFile.close();
            std::cout << "Your result has been saved. Check for the 'results.txt' file!";
        }
    } else if (answer == "no") {
        std::cout << "I will throw your results in the garbage bin then..... hehehe" << std::endl;
    }

}

std::string correctingInput() {
    std::string answer;
    std::cin >> answer;
    answer = input_to_lowercase(answer);
    return answer;
}

bool isNumber(const std::string& s) {
    // This function will check if the string given is an integer or not. //

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i]) == 0) {
            return false;
        }
    }
    return true;
}
