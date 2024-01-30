//
// Created by gribk on 30.04.2023.
//

#ifndef INC_4_1_3_CL5_H
#define INC_4_1_3_CL5_H


#include "cl1.h"

class cl5 : virtual public cl1 {
public:
    cl5(string name);

    string getName();

private:
    string name;

};


#endif //INC_4_1_3_CL5_H
