#include <iostream>
using namespace std;

class cl {
public:
    int getSizeN() {
        return sizeN;
    }
    long long int getN() {
        return n;
    }
    void setN(long long int n) {
        cl::n = n;
    }
    void calculateSizeN() {
        long long int a = n;
        sizeN = 0;
        if (a == 0) {
            sizeN++;
        }
        while (a != 0) {
            a /= 10;
            sizeN++;
        }
    }
private:
    long long int n;
    int sizeN;
};

int main() {
    cl cl;
    long long int i;
    cin >> i;
    cl.setN(i);
    cl.calculateSizeN();
    cout << "n = " << cl.getN() << endl;
    cout << "N = " << cl.getSizeN();
    return 0;
}
