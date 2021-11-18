#include <iostream>
#include <cstdlib>

int main()
{
	int liczba, strzal, proby = 0;
	srand(time(NULL)); 
	liczba = rand() % 100 + 1; 
	std::cout << "Gra w zgadywanie\n\n";

	do
	{
		std::cout << "Zgadnij liczbe pomiedzy 1 a 100 : ";
		std::cin >> strzal;
		proby++;

		if (strzal > liczba)
			std::cout << "Za wysoko!\n\n";
		else if (strzal < liczba)
			std::cout << "Za nisko! Próbuj dalej\n\n";
		else
			std::cout << "\nMasz to! Trafiles liczbe w " << proby << " prob!\n";
	} while (strzal != liczba);

    return 0;
}

