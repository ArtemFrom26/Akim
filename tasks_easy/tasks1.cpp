#include <iostream>

int digit(int number) {
    int temp = 1;
    int n = 0;
    while ((number / temp) != 0) {
        temp *= 10;
        n++;
    }
    
	return n;
}

int my_pow(int n, int m) {
    if (m == 0) {
        return 1;
    }

    else {
        return n*my_pow(n, m-1);
    }

}

int main() {
    int num;
    std::cin >> num;
    int dd = digit(num);

    while(dd != 0) {
        std::cout << ((num / (my_pow(10,(dd - 1)))) * (my_pow(10,(dd - 1)))) << std::endl;
        num = (num % (my_pow(10, (dd - 1))));
        dd--;
    }
}
