#include <iostream>

int main()
{
    int liczba;
    std::cout << "Podaj liczbe ktora chcesz sprawdzic: ";
    std::cin >> liczba;
    for (int i = 1; liczba >= i; i++) {
    if (i % 5 == 0 && i % 3 == 0) {
        std::cout << "FizzBuzz" << std::endl;
    }
    else if (i % 5 == 0) {
        std::cout << "Buzz" << std::endl;
    }
    else if (i % 3==0) {
        std::cout << "Fizz" << std::endl;
    }
    else {
        std::cout << i << std::endl;
    }
    }
    return 0;
}
