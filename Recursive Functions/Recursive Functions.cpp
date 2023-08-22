// Recursive Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int factorial(int i) {
    return i < 0 ? 0 : i > 1 ? i * factorial(i - 1) : 1;
}

void fibonacci(int n, int a = 0, int b = 1) {
    if (n <= 0 && a == 0) std::cout << "Input must be integer greater than 0!\n\n";
    else if (n > 0) {
        std::cout << a << " ";
        fibonacci(n - 1, b, a + b);
    }
    else
        std::cout << "\n\n";
}

int main()
{
    // printf("hello from %s!\n", "Recursion");
    std::cout << "Enter positive integer:\n>";
    int i;
    while (true) {
        std::cout << "Enter positive integer for factorial:\n>";
        std::cin >> i;
        i = factorial(i);
        i != 0 ? std::cout << "Factorial: " << i << "" : std::cout << "Input must be positive integer!";
        
        std::cout << "\n\n";
        std::cout << "How many fibonacci numbers to print?\n>";
        std::cin >> i;
        fibonacci(i);
        //std::cout << i << "\n";
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
