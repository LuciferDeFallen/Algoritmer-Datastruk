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
    int i;
    while (true) {
        std::cout << "Enter positive integer for factorial:\n>";
        std::cin >> i;

        // Check if input is integer
        while (!std::cin.good()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Must be integer!\n>";
            std::cin >> i;
        }

        i = factorial(i);
        i != 0 ? std::cout << "Factorial: " << i << "" : std::cout << "Factorial of negative integer is undefined!";

        std::cout << "\n\n";
        std::cout << "How many fibonacci numbers to print?\n>";
        std::cin >> i;

        // Check if input is integer
        while (!std::cin.good()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Must be integer!\n>";
            std::cin >> i;
        }

        fibonacci(i);
    }
    return 0;
}
