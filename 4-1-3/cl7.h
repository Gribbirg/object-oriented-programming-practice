//
// Created by gribk on 30.04.2023.
//

#ifndef INC_4_1_3_CL7_H
#define INC_4_1_3_CL7_H


#include "cl4.h"
#include "cl5.h"

class cl7 : public cl4, public cl5  {
public:
    cl7(string name);

    string getName();

private:
    string name;
};


#endif //INC_4_1_3_CL7_H
