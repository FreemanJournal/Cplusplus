#include <functional>
#include <iostream>
#include <climits>
using namespace std;


int main() {
    vector<int> numbers = {-4,-1,0,3,10};
    vector<int> sqrList(numbers.size());
    int left = 0;
    int right = numbers.size() - 1;
    int index = numbers.size() - 1;

    while (left <= right) {
        if (abs(numbers[left]) >= abs(numbers[right])) {
            sqrList[index] = numbers[left] * numbers[left];
            left++;
        }else {
            sqrList[index] = numbers[right] * numbers[right];
            right--;
        }
        index--;
    }


    cout << "Sorted Squared List: ";
    for (int num : sqrList) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

