// Ввожу тебе int, должен вывости все разряды числа. Пример: ВВОД: 123 ВЫВОД: 100, 20, 3.

#include<iostream>

int discharge(int number) {
    int temp = 1;
    int n = 0;
    while((number / temp) != 0) {
        temp *= 10;
        n++;
    }
    return n;
}

int my_pow(int n, int m) {
    int temp = n;
    for(int i = 1; i <= m; i++) n *= temp;
    return n;
}

int main() {
    int number;
    std::cin >> number;
    int discharge;
    discharge = discharge(number);

    while(discharge != 0) {
        std::cin << (number / my_pow(10, discharge - 1)) * (discharge - 1) << std::endl;
        number = number % (discharge - 1);
        discharge--;
    }
}
