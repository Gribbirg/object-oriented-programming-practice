//
// Created by gribk on 30.04.2023.
//

#include "cl4.h"

cl4::cl4(string name) : cl1(name + "_4") {
    this->name = name + "_4";
}

string cl4::getName() {
    return name;
}
