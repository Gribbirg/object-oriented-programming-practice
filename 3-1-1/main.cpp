#include <iostream>
#include "cl.h"

using namespace std;

int main() {
    cl cl;
    int first, second;
    char d;
    cin >> first >> d >> second;
    cl.firstCalc(first, d, second);

    int i = 1;
    cin >> d;
    while (d != 'C') {
        cin >> second;
        cl.otherCalc(d, second);
        i++;
        if (i % 3 == 0) {
            cout << cl.getZn();
        }
        cin >> d;
    }
    return 0;
}
