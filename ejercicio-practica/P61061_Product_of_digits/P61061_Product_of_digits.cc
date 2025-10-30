/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Albert Einstein aeinstein@ull.edu.es
  * @date Oct 12 2022
  * @brief The program reads several numbers, and for each one prints the 
  * product of its digits, and the product of the digits of the latest product, 
  * etcetera, until the resulting product has just one digit.
  */

#include <iostream>

int productOfDigits(int n) {
  int producto = 1;
  while (n > 0) {
    producto *= (n % 10);
    n /= 10;
  }
  return producto;
}

int main() {
  int num;
  while (cin >> num) {
    int ahora = num;
    while (ahora >= 10) {
      ahora = productOfDigits(ahora);
      std::cout << ahora << std::endl;
    }
    std::cout << "----------" << std::endl;
  }
  return 0;
}
