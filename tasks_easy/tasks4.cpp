#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите количество метров: ";
    int x;
    std::cin >> x;
    double y = x/1000.0;
    std::cout << std::endl << std::endl
              << x << " метров будет "
              << y << " километра" << std::endl;
}
