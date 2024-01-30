//
// Created by gribk on 30.04.2023.
//

#ifndef INC_4_1_3_CL6_H
#define INC_4_1_3_CL6_H

#include "cl2.h"
#include "cl3.h"

class cl6 : public cl2, public cl3 {
public:
    cl6(string name);

    string getName();

private:
    string name;

};


#endif //INC_4_1_3_CL6_H
