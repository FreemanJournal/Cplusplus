#include <functional>
#include <iostream>
#include <climits>
using namespace std;
// using namespace string;

int countVowels(const string &str) {
    // Define the vowels
    string vowels = "aeiouAEIOU";
    // Initialize a counter for vowels
    int vowelCount = 0;
    // Iterate through the each charecter in the string
    for (char ch : str) {
        if (vowels.find(ch) != string::npos) {
            vowelCount++;
        }
    }

    return vowelCount;
}




int main() {
    string input;

    // Get the input from the user
    cout << "Enter a string: ";
    getline(cin,input);

    // count the vowels
    int result = countVowels(input);

    // Output the result
    cout << "The number of vowels in \"" << input << "\"is: " << result << endl ;
    return 0;


}

