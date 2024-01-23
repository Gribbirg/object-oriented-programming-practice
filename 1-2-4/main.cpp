#include <iostream>

using namespace std;

class cl {
public:
    int zn;
    void firstCalc(int first, char d, int second) {
        if (d == '+')
            zn = first + second;
        else if (d == '-')
            zn = first - second;
        else if (d == '*')
            zn = first * second;
        else if (d == '%')
            zn = first % second;
    }
    void otherCalc(char d, int second) {
        if (d == '+')
            zn += second;
        else if (d == '-')
            zn -= second;
        else if (d == '*')
            zn *= second;
        else
            zn %= second;
    }
};

int main() {
    cl cl;
    int first;
    char d;
    int second;
    cin >> first >> d >> second;
    cl.firstCalc(first, d, second);
    cin >> d >> second;
    cl.otherCalc(d, second);
    cin >> d >> second;
    cl.otherCalc(d, second);
    cout << cl.zn;
    return 0;
}
