#include <iostream>

int main() {
    int height;

    // Get the height of the triangle from the user
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Loop to print the triangle
    for (int i = 1; i <= height; i++) {
        // Print spaces to align the triangle to the right
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }

        // Print 1's for the left side of the triangle
        for (int k = 1; k <= i; k++) {
            
        }

        // Print 0's for the right side of the triangle
        for (int l = 1; l < i; l++) {
            std::cout << "0";
        }

        // Move to the next line to start a new row of the triangle
        std::cout << std::endl;
    }

    return 0;
}
