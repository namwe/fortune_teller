//
// Created by murre on 7/15/20.
//

#ifndef GENIE_FORTUNE_H
#define GENIE_FORTUNE_H
#include <iostream>

class Fortune {
private:
    const std::string fortunes[8] = {"Your future looks bright. You will have 2 kids. Your profession will be librarian. You will live in Washington DC.",
                                    "Your future looks dull. You will have 1 kids. Your profession will be dentist. You will live in Stockholm.",
                                    "Your future looks great. You will have 4 kids. Your profession will be youtuber. You will live in California.",
                                    "Your future looks boring. You will have 2 kids. Your profession will be office worker. You will live in Berlin.",
                                    "Your future looks decent. You will have 2 kids. Your profession will be programmer. You will live in New Delhi.",
                                    "Your future looks bad. You will have 9 kids. Your profession will be retail worker. You will live in Paris.",
                                    "Your future looks awful. You will have 0 kids. Your profession will be homeless. You will live in a dumpster.",
                                    "Your future looks excellent. You will have 3 kids. Your profession will be doctor. You will live in New York.",};

public:
    std::string print_results();
};


#endif //GENIE_FORTUNE_H
