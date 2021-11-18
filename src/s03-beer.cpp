#include <iostream>

int main()
{
    int beer=99;
    int nobeer=0;
    int liczba;

    std::cout << "Podaj ilosc butelek: ";
    std::cin >> liczba;
    if (liczba <99&&liczba>1) {
        while (liczba > 0)
        {
            std::cout << liczba << " bottle(s) of beer." << std::endl;
            liczba--;
            std::cout << "Take one down, pass it around," << std::endl;
       }
    }
    else {
        while (beer > 0) {
            std::cout << beer << " bottle(s) of beer." << std::endl;
            beer--;
            std::cout << "Take one down, pass it around," << std::endl;
        };
    }if (beer == nobeer || liczba == nobeer)
    {
        std::cout << "nobotleofwater" << std::endl;
    }

    return 0;
}
