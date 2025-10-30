/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Alejandro alu0101647456@ull.edu.es
  * @date Oct 30 2025
  * @brief The program: given a sequence made up of only ‘(’ and ‘)’, tell if
  * the parentheses close correctly.
  */

#include <iostream>
#include <string>

int main() {
  std::string cadena;
  std::cin >> cadena;
  int balance = 0;
  for (char c : cadena) {
    if (c == '(') {
      balance++;
    } 
    else if (c == ')') {
      balance--;
    }
    if (balance < 0) {
      std::cout << "no" << std::endl;
      return 0;
    }
  }
  if (balance == 0) {
    std::cout << "yes" << std::endl;
  } 
  else {
    std::cout << "no" << std::endl;
  }
  return 0;
}
