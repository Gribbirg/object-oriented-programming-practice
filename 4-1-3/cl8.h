//
// Created by gribk on 30.04.2023.
//

#ifndef INC_4_1_3_CL8_H
#define INC_4_1_3_CL8_H


#include "cl6.h"
#include "cl7.h"

class cl8 : public cl6, public cl7  {
public:
    cl8(string name);

    string getName();

private:
    string name;
};


#endif //INC_4_1_3_CL8_H
