#include <iostream>
#include "cl.h"

int main() {
    cl *m = new cl();
    m->pr();
    delete m;
    return 0;
}
