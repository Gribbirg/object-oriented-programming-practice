//
// Created by gribk on 16.03.2023.
//

#include "cl2.h"

using namespace std;

cl2::cl2(string name, int n) : cl1(name, n) {
    this->name = name + "_2";
    this->n = pow(n, 2);
}

void cl2::printPolya() {
    cout << '\n' << name << " " << n;
}


