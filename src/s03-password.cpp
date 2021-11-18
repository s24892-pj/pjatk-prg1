#include <iostream>
#include <string> 

auto ask_user_for_password(std::string prompt) -> std::string
{
   auto line = std::string{};
   std::cout << prompt;
   std::getline(std::cin, line);
   return line; 
}

auto main(int, char* argv[]) -> int 
{
   auto a = ask_user_for_password("Hasło: ");
   while (a != argv[1])
   {
   std::cout << "Błędne hasło, spróbuj ponownie" << std::endl;
   a = ask_user_for_password("Hasło: ");
   }

   return 0;
}
