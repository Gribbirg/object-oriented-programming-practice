#include <iostream>
#include <iomanip>

using namespace std;

class cl {
public:
    cl() {
        cin >> len;
        mass = new int[len];
        cout << "N = " << len;
    }

    void reedMass() {
        for (int i = 0; i < len; i++) {
            cin >> mass[i];
        }
    }

    void printMass() {
        cout << endl;
        for (int i = 0; i < len; i++) {
            cout << setw(5) << mass[i];
        }
    }

    void rotateMass() {
        int save;
        for (int i = 0; i <= len / 2; i++) {
            save = mass[i];
            mass[i] = mass[len - i - 1];
            mass[len - i - 1] = save;
        }
    }

private:
    int len;
    int *mass;
};

int main() {
    cl cl;
    cl.reedMass();
    cl.printMass();
    cl.rotateMass();
    cl.printMass();
    return 0;
}
