//
// Created by gribk on 30.04.2023.
//

#include "cl7.h"

cl7::cl7(string name) : cl4(name + "_7"), cl5(name + "_7"), cl1(name + "_7") {
    this->name = name + "_7";
}

string cl7::getName() {
    return name;
}
