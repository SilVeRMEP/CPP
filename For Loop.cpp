#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << words[i - 1] << "\n";
        } else {
            cout << (i % 2 == 0 ? "even" : "odd") << "\n";
        }
    }
    
    return 0;
}