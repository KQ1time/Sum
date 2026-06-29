// Program for sum two integers.
// v-0.0.1

#include <iostream>

// Function for sum two integers.
int sum() {
    int a, b;
    std::cout << "Input two integers.\n";
    std::cin >> a >> b;
    return a + b;
}

// Function which print result.
int main() {
    std::cout << "Result: " << sum();
    return 0;
}
