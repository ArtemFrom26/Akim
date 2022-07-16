#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите числа a, b и f:"
              << std::endl;
    int a;
    int b;
    int f;
    std::cin >> a >> b >> f;
    std::cout << "a=" << a << std::endl
              << "b=" << b << std::endl
              << "f=" << f << std::endl;
    std::cout << "Вычисляем по формуле: "
              << "x=(a + b - f / a) + f * a * a - (a + b)"
              << std::endl;
    int x;
    x =(a + b - f / a) + f * a * a - (a + b);
    std::cout << "x=" << x << std::endl;
}
