#include <iostream>
#include "cl.h"
#include "cl.cpp"

using namespace std;

int main() {
    int par1, par2;
    cin >> par1;
    if (par1 <= 4) {
        cout << par1 << '?';
    } else {
        cin >> par2;
        if (par2 <= 4) {
            cout << par2 << '?';
        } else {
            cl clOb1(par1);
            cl clOb2(par2);

            clOb1 = clOb2;
            clOb1.pr();
            cout << '\n';
            clOb2.pr();
        }
    }
    return 0;
}
