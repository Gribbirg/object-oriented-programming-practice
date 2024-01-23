//
// Created by gribk on 05.03.2023.
//

#include "stack.h"

stack::stack(std::string name, int size) {
    this->name = name;
    this->size = size;
    firstElement = new int[size];
    lastElement = firstElement;
}

int stack::numOfElements() {
    return lastElement - firstElement;
}

bool stack::add(int element) {
    if (size > numOfElements()) {
        *lastElement = element;
        lastElement++;
        return true;
    }
    return false;
}

bool stack::pop() {
    if (numOfElements() > 0) {
        lastElement--;
        extraElement = *lastElement;
        return true;
    }
    return false;
}

std::string stack::getName() {
    return name;
}

int stack::getSize() {
    return size;
}
