#include <iostream>
#include <vector>
using namespace std;

// Find the sum of all the multiples of 3 or 5 below 1000
int sumOfMultiple(int num,int limit){
    int n = (limit - 1) / num;
    return num * n * (n + 1) / 2;
}

int main() {
    cout << "Give me a number: ";
    int limit = 0;
    cin >> limit;
    int sum3 = sumOfMultiple(3,limit);
    int sum5 = sumOfMultiple(5,limit);
    int sum15 = sumOfMultiple(15,limit);

    int totalSum = sum3 + sum5 - sum15;

    cout << "The sum of all multiples of 3 or 5 below " << limit << " is: " << totalSum << endl;

    return 0;
}


