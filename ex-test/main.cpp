#include <iostream>
#include <typeinfo>
using namespace std;
class cl {
public:
    int i;
    cl(){ cin >> i; }
};

template <int x>
void fun (cl & ob) {
    cout << x;
}


int main ( ) {
    cl ob;
    fun<1>(ob);
    return 0;
}
