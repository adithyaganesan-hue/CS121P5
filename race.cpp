#include "race.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <unistd.h>

const static int NUM_HORSES = 5;
const static int TRACK_LENGTH = 15;

Race::Race() {
    srand(time(NULL));
    int i = 0;
    for (Horse& h : horses) {
        h.init(i, TRACK_LENGTH);
        i++;
    } //end for
} //end constructor

void Race::start() {
    bool winner = false;

    while (!winner) {
        for (Horse& h : horses) {
            h.advance();
            h.printLane();
            if (h.isWinner()) {
                winner = true;
            } //end if
        } //end for
        std::cout << std::endl;
        usleep(250000);
    } //end while
} //end start

