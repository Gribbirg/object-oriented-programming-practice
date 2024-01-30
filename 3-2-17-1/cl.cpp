//
// Created by gribk on 01.03.2023.
//

#include "cl.h"
#include <iostream>
#include <iomanip>

using namespace std;

cl::cl() {
    cin >> sizeMass;
    mass = new int[sizeMass];
    for (int i = 0; i < sizeMass; i++) {
        mass[i] = i * i;
    }
}

void cl::pr() {
    for (int i = sizeMass - 1; i >= 0; i--) {
        cout << setw(5) << mass[i];
    }
}
