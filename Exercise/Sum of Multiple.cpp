#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

  unordered_map<int, string> myMap;

  myMap[1] = "Apple";
  myMap[2] = "Banana";
  myMap[3] = "Cherry";

  cout << "Key 2: " << myMap[2] << endl;

  return 0;
}


