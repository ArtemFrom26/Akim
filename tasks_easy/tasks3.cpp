#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите букву нижнего регистра:"
              << std::endl << std::endl;
    char x;
    std::cin >> x;
    
    std::cout << "Та же буква в верхнем регистре: "
              << (char)(x - 32) << '.' << std::endl;
    
}
