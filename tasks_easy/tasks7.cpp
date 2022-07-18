#include <iostream>

int main() {
    int k;
    std::cin >> k;

    for(int i = 0; i < k; i++) {
        for(int j = 0; j <= i; j++) {
            std::cout << '+';
        }

        std::cout << std::endl;
    }

}
