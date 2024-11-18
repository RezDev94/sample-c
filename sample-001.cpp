#include <iostream>
#include <cstring> // For strcpy()

int main() {
    char buffer[10];

    std::cout << "Enter a string: ";
    std::cin >> buffer; // Can also lead to buffer overflow, but let's focus on strcpy()

    // Unsafe use of strcpy
    char input[100];
    std::cin.ignore(); // Clear newline character from input buffer
    std::cin.getline(input, 100);

    strcpy(buffer, input); // CWE-242: Use of inherently dangerous function

    std::cout << "Buffer content: " << buffer << std::endl;
    return 0;
}
