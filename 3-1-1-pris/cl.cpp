//
// Created by gribk on 27.02.2023.
//

#include "cl.h"
#include <iostream>
using namespace std;

cl::cl(int par){
    mass = new int[par];
    massSize = par;
    for (int i = 0; i < par; i++) {
        mass[i] = par;
    }
}
void cl::pr(){
    cout << mass[0];
    for (int i = 1; i < massSize; i++) {
        cout << "  " << mass[i];
    }
}