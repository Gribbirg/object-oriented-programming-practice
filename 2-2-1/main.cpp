#include <iostream>

class cl2 {
public:
    int open;

    cl2(int i_data);

    void plusOpen();

    void activatePlusClosed();

    void state();

private:
    int closed;
    bool wasPrint;

    void plusClosed();
};

cl2::cl2(int a) {
    open = a;
    closed = 3 * a;
    wasPrint = false;
}

void cl2::plusOpen() {
    open += 4;
    closed += 1;
}

void cl2::plusClosed() {
    open += 7;
    closed += 5;
}

void cl2::activatePlusClosed() {
    plusClosed();
}

void cl2::state() {
    if (wasPrint)
        std::cout << "\nValue of the available property " << open << "; Value of a hidden property " << closed;
    else {
        std::cout << "Value of the available property " << open << "; Value of a hidden property " << closed;
        wasPrint = true;
    }
}

int main() {
    int i_data;
    std::cin >> i_data;
    cl2 *c = new cl2(i_data);

    c->state();
    c->plusOpen();
    c->state();

    std::cin >> i_data;
    if (i_data > c->open) {
        c->open = i_data * 8;
    }

    c->state();
    c->activatePlusClosed();
    c->state();
    return 0;
}
