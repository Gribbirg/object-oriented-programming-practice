//
// Created by gribk on 14.03.2023.
//

#ifndef INC_3_1_3_PEREDACHA_CL_H
#define INC_3_1_3_PEREDACHA_CL_H


class cl {

public:

    cl();

    cl(int len);

    cl(const cl &ob);

    ~cl();

    void enterZn();

    int parSum();

    int parMn();

    int sumEl();

    void createMass();

    void printMass();

private:
    int *mass;
    int len;

};


#endif //INC_3_1_3_PEREDACHA_CL_H
