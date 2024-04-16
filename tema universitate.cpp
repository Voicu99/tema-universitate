// tema universitate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int puncte;
    std::cout << "Introduceti punctele obtinute: ";
    std::cin >> puncte;

    if (puncte >= 90) {
        std::cout << "Admis" << std::endl;
    }
    else {
        std::cout << "Respins" << std::endl;
    }

    return 0;
}