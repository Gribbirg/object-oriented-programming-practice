#include <iostream>
#include "stack.h"
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name;
    int size;

    cin >> name >> size;
    stack stack1(name, size);
    cin >> name >> size;
    stack stack2(name, size);

    int element;
    cin >> element;
    while (stack1.add(element) && stack2.add(element)) {
        cin >> element;
    }

    cout << stack1.getName() << " " << stack1.getSize();
    cout << '\n' << stack2.getName() << " " << stack2.getSize();
    cout << '\n' << left << setw(15) << stack1.getName() << left << setw(15) << stack2.getName();
    while (stack1.pop() && stack2.pop()) {
        cout << '\n' << setw(15) << stack1.extraElement << setw(15) << stack2.extraElement;
    }
    return 0;
}
