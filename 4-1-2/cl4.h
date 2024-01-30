//
// Created by gribk on 16.03.2023.
//

#ifndef INC_4_1_2_CL4_H
#define INC_4_1_2_CL4_H


#include "cl3.h"

using namespace std;

class cl4 : private cl3 {
public:
    cl4(string name, int n);
    void printPolya();
private:
    string name;
    int n;
};


#endif //INC_4_1_2_CL4_H
