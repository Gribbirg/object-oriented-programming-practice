//
// Created by gribk on 20.03.2023.
//

#include "Triangle.h"
#include <cmath>


Triangle::Triangle(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

int Triangle::per() {
    return a + b + c;
}

double Triangle::square() {
    double polPer = (double) per() / 2;
    return sqrt(polPer * (polPer - a) * (polPer - b) * (polPer - c));
}
