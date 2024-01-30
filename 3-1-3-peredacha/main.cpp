#include <iostream>
#include "cl.h"

using namespace std;

cl func(int len) {
    cl cl(len);
    return cl;
}

int main() {
    int len;
    cin >> len;
    if (len <= 2 || len % 2 == 1) {
        cout << len << "?";
        return 0;
    }
    cout << len;
    cl cl1;
    cl1 = func(len);
    cl1.createMass();
    cl1.enterZn();
    cl1.parMn();
    cl cl2 = cl1;
    cl2.parSum();
    cl1.printMass();
    cout << '\n' << cl1.sumEl();
    cl2.printMass();
    cout << '\n' << cl2.sumEl();
    return 0;
}
