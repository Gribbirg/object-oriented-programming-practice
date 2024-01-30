//
// Created by gribk on 28.02.2023.
//

#ifndef INC_3_1_2_CL2_H
#define INC_3_1_2_CL2_H


#include "cl1.h"
class cl1;

class cl2 {
    friend int maxPole(cl1 &cl1, cl2 &cl2);
public:
    void setPole(int pole1, int pole2);
private:
    int pole1;
    int pole2;
};


#endif //INC_3_1_2_CL2_H
