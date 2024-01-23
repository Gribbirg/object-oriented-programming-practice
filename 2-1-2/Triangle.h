//
// Created by gribk on 20.03.2023.
//

#ifndef INC_2_1_2_TRIANGLE_H
#define INC_2_1_2_TRIANGLE_H


class Triangle {
private:
    int a;
    int b;
    int c;
public:
    Triangle(int a, int b, int c);

    int per();

    double square();
};


#endif //INC_2_1_2_TRIANGLE_H
