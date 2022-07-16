#include <iostream>

int discharge(int number) {
    int temp = 1;
    int n = 0;
    while ((number / temp) != 0) {
        temp *= 10;
        n++;
    }
    
	return n;
}

int my_pow(int n, int m) {
    int temp = n;
    for (int i = 1; i <= m; i++) {
		n *= temp;
	}
    
	return n;
}

int main() {
    int number;
    std::cin >> number;
    int dd = discharge(number);

    while (dd != 0) {
        std::cout << (number / my_pow(10, dd - 1)) * (dd - 1) << '\n';
        number = number % (dd - 1);
        --dd;
    }
}
