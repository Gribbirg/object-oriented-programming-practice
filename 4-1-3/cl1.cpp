//
// Created by gribk on 30.04.2023.
//

#include "cl1.h"


string cl1::getName() {
    return name;
}

cl1::cl1(string name) {
    this->name = name + "_1";
}
