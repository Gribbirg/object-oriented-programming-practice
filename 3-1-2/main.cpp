#include <iostream>
#include "cl1.h"
#include "cl2.h"

using namespace std;

int maxPole(cl1 &cl1, cl2 &cl2) {
    if (cl1.pole >= cl2.pole1 && cl1.pole >= cl2.pole2)
        return cl1.pole;
    else if (cl2.pole1 >= cl1.pole && cl2.pole1 >= cl2.pole2)
        return cl2.pole1;
    else
        return cl2.pole2;
}

int main() {
    int pole1, pole2;
    cin >> pole1;
    cl1 cl1(pole1);
    cin >> pole1 >> pole2;
    cl2 cl2;
    cl2.setPole(pole1, pole2);
    cout << "max = " << maxPole(cl1, cl2);
}
