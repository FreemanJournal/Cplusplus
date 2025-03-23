#include <functional>
#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[],int size) {
    // Initialize the largest and second-largest variables
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++) {
        // If the current element is greater than the largest
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        // If the current element is between largest and current second-largest
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    // If no second-largest element exists
    if (second == INT_MIN) {
        cout << "No second-largest element exists" << endl;
        return -1;
    }
    return second;
}
int main() {
    int numbers[] = {10, 10, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int secondlargest = findSecondLargest(numbers,size);

    if (secondlargest != -1) {
        cout << "The second-largest element is: " << secondlargest << endl;
    }
    return 0;
}

