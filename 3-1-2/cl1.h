//
// Created by gribk on 28.02.2023.
//

#ifndef INC_3_1_2_CL1_H
#define INC_3_1_2_CL1_H


#include "cl2.h"
class cl2;

class cl1 {
    friend int maxPole(cl1 &cl1, cl2 &cl2);
public:
    cl1(int pole);
private:
    int pole;
};


#endif //INC_3_1_2_CL1_H
