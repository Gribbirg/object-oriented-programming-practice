//
// Created by gribk on 28.02.2023.
//

#include "cl.h"

void cl::firstCalc(int first, char d, int second) {
    if (d == '+')
        zn = first + second;
    else if (d == '-')
        zn = first - second;
    else if (d == '*')
        zn = first * second;
    else if (d == '%')
        zn = first % second;
}

void cl::otherCalc(char d, int second) {
    if (d == '+')
        zn += second;
    else if (d == '-')
        zn -= second;
    else if (d == '*')
        zn *= second;
    else
        zn %= second;
}

int cl::getZn() {
    return zn;
}
