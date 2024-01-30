//
// Created by gribk on 30.04.2023.
//

#include "cl3.h"

cl3::cl3(string name) : cl1(name + "_3") {
    this->name = name + "_3";
}

string cl3::getName() {
    return name;
}
