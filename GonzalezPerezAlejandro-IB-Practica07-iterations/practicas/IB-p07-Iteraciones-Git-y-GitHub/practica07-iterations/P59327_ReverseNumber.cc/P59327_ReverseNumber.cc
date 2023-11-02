/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @file P50327_ReverseNumber.cc
  * @author Alejandro Gonzalez Perez: alu0101647456@ull.edu.es
  * @date Oct  2023
  * @brief The program reads a number and prints it reversed.
  * @bug There are no known bugs
  * @see
*/
  
#include <iostream>
  
int main() {
  int Numero;
  int resto;
  std::cout << "Escriba el numero que quiera darle la vuelta: ";
  std::cin >> Numero;
  while (Numero != 0) {
    resto = Numero % 10;
    Numero = Numero / 10;
    std::cout << resto;
  }
  std::cout << std::endl;
  return 0;
}
