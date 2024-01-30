//
// Created by gribk on 14.03.2023.
//

#include "cl.h"
#include <iostream>

using namespace std;

cl::cl() {
    cout << '\n' << "Default constructor";
}

cl::cl(int len) {
    cout << '\n' << "Constructor set";
    this->len = len;
}

cl::cl(const cl &ob) {
    cout << '\n' << "Copy constructor";
    this->len = ob.len;
    this->mass = new int[len];
    for (int i = 0; i < len; i++) {
        this->mass[i] = ob.mass[i];
    }
}

cl::~cl() {
    cout << '\n' << "Destructor";
    delete[] mass;
}

void cl::enterZn() {
    for (int i = 0; i < len; i++) {
        cin >> mass[i];
    }
}

int cl::parSum() {
    for (int i = 0; i < len; i += 2) {
        mass[i] = mass[i] + mass[i + 1];
    }
    return sumEl();
}

int cl::parMn() {
    for (int i = 0; i < len; i += 2) {
        mass[i] = mass[i] * mass[i + 1];
    }
    return sumEl();
}

int cl::sumEl() {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += mass[i];
    }
    return sum;
}

void cl::createMass() {
    mass = new int[len];
}

void cl::printMass() {
    cout << '\n' << mass[0];
    for (int i = 1; i < len; i++) {
        cout << "   " << mass[i];
    }
}



