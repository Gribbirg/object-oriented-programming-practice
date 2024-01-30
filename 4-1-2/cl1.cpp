//
// Created by gribk on 16.03.2023.
//


#include "cl1.h"


using namespace std;

cl1::cl1(string name, int n) {
    this->name = name + "_1";
    this->n = pow(n, 1);
}

void cl1::printPolya() {
    cout << name << " " << n;
}

