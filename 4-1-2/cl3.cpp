//
// Created by gribk on 16.03.2023.
//

#include "cl3.h"

using namespace std;

cl3::cl3(string name, int n) : cl2(name, n){
    this->name = name + "_3";
    this->n = pow(n, 3);
}

void cl3::printPolya() {
    cout << '\n' << name << " " << n;
}
