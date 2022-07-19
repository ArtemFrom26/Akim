//Дан отсортированный массив. На вход дается число.
//Проверить, есть ли такое число в массиве.

#include <iostream>

int main() {
    int mass[10] = {1, 4, 10, 16, 24, 97, 103, 145, 178, 200};
    int x;
    std::cin >> x;

    int l = 0;
    int r = 9;

    while (r - l > 1) {
        int m = (l + r) / 2;

        if (mass[m] < x) {
            l = m;
        }
        
        else {
            r = m;
        }

    }

    if(mass[l] == x || mass[r] == x) {
        std::cout << "YES";
    }

}

