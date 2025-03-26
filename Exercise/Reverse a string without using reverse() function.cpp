#include <functional>
#include <iostream>
#include <climits>
using namespace std;
// using namespace string;

string reverseString(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        swap(str[left],str[right]);
        left++;
        right--;
    }
    return str;
}

int main() {
    string input;
    // Get the input from the user
    cout << "Enter a string: ";
    getline(cin,input);

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed <<endl;


    return 0;


}

