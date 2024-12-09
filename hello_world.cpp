#include <iostream>

int
main()  # точка входа в программу
{
  std::string name; // имя пользователя
  std::cin >> name;
  std::cout << "HELLO, WORLD from " << name << "!" << std::endl;
}
