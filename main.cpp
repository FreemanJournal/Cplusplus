#include <iostream>
#include <vector>
using namespace std;

int main() {
    int low = 1, high = 3;
    int inCount = (high - low) / 2;
    if (low % 2 != 0 || high % 2 != 0) {
        inCount++;
    }
    cout << inCount << endl;
    return 0;
}


