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
    closed = 2 * a;
    wasPrint = false;
}

void cl2::plusOpen() {
    open += 1;
    closed += 4;
}

void cl2::plusClosed() {
    open += 5;
    closed += 7;
}

void cl2::activatePlusClosed() {
    plusClosed();
}

void cl2::state() {
    if (!wasPrint) {
        std::cout << "Value of the available property " << open << "; Value of a hidden property " << closed;
        wasPrint = true;
    }
    else
        std::cout << "\nValue of the available property " << open << "; Value of a hidden property " << closed;
}


int main() {
    int i_data;
    std::cin >> i_data;
    cl2 cl2(i_data);

    cl2.state();
    cl2.plusOpen();
    cl2.state();
    std::cin >> i_data;
    cl2.open = i_data;
    cl2.state();
    cl2.activatePlusClosed();
    cl2.state();

    return 0;
}
