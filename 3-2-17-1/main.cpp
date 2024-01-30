#include <iostream>
#include "cl.h"


using namespace std;

int main() {
    cl *m = new cl();
    m->pr();
    delete m;
    return 0;
}