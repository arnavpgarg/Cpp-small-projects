#include <iostream>

int main() {
    char opr;
    double num1, num2;
    double result;

    std::cout << "**************** CALCULATOR ********************\n";

    std::cout << "Enter an operation: ";
    std::cin >> opr;

    std::cout << "First number: ";
    std::cin >> num1;

    std::cout << "Second number: ";
    std::cin >> num2;

    switch (opr) {
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result: " << result << '\n';
        break;
    default:
        std::cout << "Invalid operator";
        break;
    }

    std::cout << "***************************************************";

    return 0;
}