#include <functional>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath> // for log10

using namespace std;

void swapNumbers(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 100;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapNumbers(x,y);

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}

// Concept of Pass-by-Reference
// Pass-by-value: A function gets a copy of the variable, so the original variable remains unchanged.
// Pass-by-reference: A function gets the actual reference (or memory address) of the variable, allowing modifications to persist outside the function.


