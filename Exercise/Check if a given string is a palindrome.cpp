#include <functional>
#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(const string& str) {
    // Initialize two pointers
    size_t left = 0;
    size_t right = str.length() - 1;
    while (left < right ) {
        // Skip non-alphanumeric characters from the left
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        // Skip non-alphanumeric characters from the right
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;

}

int main() {

    // Test cases
    string test1 = "racecar";
    string test2 = "A man, a plan, a canal, Panama!";
    string test3 = "hello";
    string test4 = "12321";
    string test5 = "";

    cout << boolalpha; // Print bools as true/false instead of 1/0
    cout << "Is \"" << test1 << "\" a palindrome? " << isPalindrome(test1) << endl;
    cout << "Is \"" << test2 << "\" a palindrome? " << isPalindrome(test2) << endl;
    cout << "Is \"" << test3 << "\" a palindrome? " << isPalindrome(test3) << endl;
    cout << "Is \"" << test4 << "\" a palindrome? " << isPalindrome(test4) << endl;
    cout << "Is \"" << test5 << "\" a palindrome? " << isPalindrome(test5) << endl;

    return 0;
}

