#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    Triangle triangle(a, b, c);

    cout << "P = " << triangle.per() << '\n';
    cout << "S = " << triangle.square();

    return 0;
}
