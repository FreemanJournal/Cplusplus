#include <functional>
#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1,2,3,4};
    reverse(begin(numbers),end(numbers));
    for (int element: numbers) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}

