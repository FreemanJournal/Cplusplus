#include <functional>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath> // for log10

using namespace std;
// Find Numbers with Even Number of Digits
int countDigits(int num) {
    if (num == 0) return 1;
    return static_cast<int>(log10(num)) + 1;;
}
int main() {
    vector<int> nums = {12,44,345,2,6,7896,12345683,8664};
    int ct = 0;
    for (int i = 0; i < nums.size();i++) {
        if (countDigits(nums[i]) % 2 == 0) {
            ct++;
        }
    }
    cout << ct;
    return ct;
}


