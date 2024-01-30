//
// Created by gribk on 30.04.2023.
//

#include "cl8.h"

cl8::cl8(string name) : cl6(name + "_8"), cl7(name + "_8"), cl1(name + "_8") {
    this->name = name + "_8";
}

string cl8::getName() {
    return name;
}
