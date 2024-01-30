//
// Created by gribk on 30.04.2023.
//

#include "cl6.h"

cl6::cl6(string name) : cl2(name + "_6"), cl3(name + "_6") {
    this->name = name + "_6";
}

string cl6::getName() {
    return name;
}
