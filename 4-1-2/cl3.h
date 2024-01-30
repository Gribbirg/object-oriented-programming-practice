//
// Created by gribk on 16.03.2023.
//

#ifndef INC_4_1_2_CL3_H
#define INC_4_1_2_CL3_H


#include "cl2.h"

class cl3 : private cl2 {
public:
    cl3(string name, int n);
    void printPolya();
private:
    string name;
    int n;
};


#endif //INC_4_1_2_CL3_H
