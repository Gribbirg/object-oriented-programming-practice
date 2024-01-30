//
// Created by gribk on 30.04.2023.
//

#ifndef INC_4_1_3_CL2_H
#define INC_4_1_3_CL2_H


#include "cl1.h"

class cl2 : public cl1 {
public:
    cl2(string name);

    string getName();

private:
    string name;
};


#endif //INC_4_1_3_CL2_H
