#include <iostream>
#include "cl1.h"
#include "cl2.h"
#include "cl3.h"
#include "cl4.h"
#include "cl5.h"
#include "cl6.h"
#include "cl7.h"
#include "cl8.h"

int main() {

    string name;
    cin >> name;

    cl8 *cl = new cl8(name);

    cout << ((cl1 *) (cl2 *) (cl6 *) cl)->getName();
    cout << '\n' << ((cl1 *) (cl3 *) (cl6 *) cl)->getName();
    cout << '\n' << ((cl1 *) (cl4 *) (cl7 *) cl)->getName();
    cout << '\n' << ((cl1 *) (cl5 *) (cl7 *) cl)->getName();
    cout << '\n' << ((cl2 *) (cl6 *) cl)->getName();
    cout << '\n' << ((cl3 *) (cl6 *) cl)->getName();
    cout << '\n' << ((cl4 *) (cl7 *) cl)->getName();
    cout << '\n' << ((cl5 *) (cl7 *) cl)->getName();
    cout << '\n' << ((cl6 *) cl)->getName();
    cout << '\n' << ((cl7 *) cl)->getName();
    cout << '\n' << cl->getName();

    delete cl;

    return 0;
}
