#include <iostream>

int main()
{
    int liczba;
    std::cout << "Podaj liczbe od ktorej ma odliczac: " << std::endl;
    std::cin >> liczba;
    for (int i = 0;  liczba>=i; liczba--) {
        std::cout << "Wybuchnie za: " << liczba << std::endl;
    }
    return 0;
}
