#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2,11,15};
    int target = 9;
    unordered_map<int,int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int remaining = target - nums[i];

        if ( numMap.find(remaining) != numMap.end()) {
            // The find operator in unordered list search for the key return one of the things :
            // 1. if it finds the key, it will return the "key" pair.
            // 2. if it does not find the key, it will return "numMap.end()" or "0".
            cout << "Indices " << numMap[remaining] << " and " << i << endl;
            return 0;
        }
        numMap[nums[i]] = i;
    }

    cout << "No solution found" << endl;
    return 0;

    return 0;
}


