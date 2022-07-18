#include <iostream>
#include <string>

int main() {
    std::cout << "Введите имя студента: ";
    std::string name;
    std::cin >> name;
    std::cout << std::endl << "Введите фамилию студента: ";
    std::string surname;
    std::cin >> surname;
    std::cout << std::endl << "Введите отчество студента: ";
    std::string patron;
    std::cin >> patron;
    std::cout << std::endl << "Введите номер группы студента: ";
    std::string number;
    std::cin >> number;

    int k;
    k = name.size() + surname.size() + patron.size() + 4;
    int n;
    n = 25 + number.size();
    int m = std::max(n,k);

    for(int i = 0; i < m; i++) {
        std::cout << *;
    }
    
    std::cout << std::endl;

    std::cout << '*' << " Лабораторная работа №1";
    for(int i = 0; i < m - 22; i++) {
        std::cout << " ";
    }
    
    std::cout << '*' << std::endl;

    std::cout << '*' << "Выполнил(а): ст. гр. " << number
}
