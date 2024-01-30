//
// Created by gribk on 30.04.2023.
//

#include "cl2.h"

cl2::cl2(string name) : cl1(name + "_2") {
    this->name = name + "_2";
}

string cl2::getName() {
    return name;
}
