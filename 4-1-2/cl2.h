//
// Created by gribk on 16.03.2023.
//

#ifndef INC_4_1_2_CL2_H
#define INC_4_1_2_CL2_H


#include "cl1.h"

class cl2 : public cl1 {
public:
    cl2(string name, int n);
    void printPolya();
private:
    string name;
    int n;
};


#endif //INC_4_1_2_CL2_H
