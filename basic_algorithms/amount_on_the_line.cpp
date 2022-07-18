//Дан массив чисел. На вход подаются два числа - l и r.
//Посчитать сумму чисел в массиве от l до r.

#include <iostream>

int main() {
    int mass[10] = {3, 4, 10, 103, 230, 132, 1, 78, 79, 10};
    int l;
    int r;
    std::cin >> l >> r;
    
    int temp[10];
    temp[0] = mass[0];

    for(int i = 1; i < 10; i++) {
        temp[i] = temp[i-1] + mass[i];
    }

    std::cout << temp[r-1] - temp[l-1] << '\n';
}
