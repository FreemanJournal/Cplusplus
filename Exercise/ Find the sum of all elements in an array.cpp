#include <functional>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int numbers[] = {1,2,3,4};
    // Manually calculating the size.
    // int size = sizeof(numbers) / sizeof(numbers[0]);
    // int sum = accumulate(numbers,numbers + size,0);

    // Use std::begin and std::end to get the range
    int sum = accumulate(begin(numbers),end(numbers),0);
    cout << sum;
    return 0;
}

