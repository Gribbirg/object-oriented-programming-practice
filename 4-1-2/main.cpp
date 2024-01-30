#include <iostream>
#include "cl1.h"
#include "cl2.h"
#include "cl3.h"
#include "cl4.h"

using namespace std;

int main() {
    string name;
    int n;
    cin >> name;
    cin >> n;

    cl1 *cl = (cl1 *)(new cl4(name, n));

    cl->printPolya();
    ((cl2 *) cl) -> printPolya();
    ((cl3 *) cl) -> printPolya();
    ((cl4 *) cl) -> printPolya();

    delete cl;
    return 0;
}
