//
// Created by gribk on 30.04.2023.
//

#include "cl5.h"

cl5::cl5(string name) : cl1(name + "_5") {
    this->name = name + "_5";
}

string cl5::getName() {
    return name;
}
