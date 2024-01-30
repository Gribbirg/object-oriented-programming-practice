//
// Created by gribk on 16.03.2023.
//

#include "cl4.h"

cl4::cl4(string name, int n) : cl3(name, n) {
    this->name = name + "_4";
    this->n = pow(n, 4);
}

void cl4::printPolya() {
    cout << '\n' << name << " " << n;
}