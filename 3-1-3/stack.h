//
// Created by gribk on 05.03.2023.
//

#ifndef INC_3_1_3_STACK_H
#define INC_3_1_3_STACK_H

#include <string>

class stack {
public:
    int extraElement;

    stack(std::string name, int size);
    int numOfElements();
    bool add(int element);
    bool pop();
    std::string getName();
    int getSize();
private:
    int* firstElement;
    int* lastElement;
    std::string name;
    int size;

};


#endif //INC_3_1_3_STACK_H
