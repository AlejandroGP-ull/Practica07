/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file bisiesto.cc
  * @author Alejandro alu0101647456@ull.edu.es
  * @date Oct 20 2025
  * @brief El programa indica si un año es bisiesto. 
  * @bug No hay errores conocidos
  */

#include <iostream>

int main() {
  int anio;
  std::cout << "Introduce un anio: ";
  std::cin >> anio;
  if (anio <= 0) {
      std::cout << "Wrong Input" << std::endl;
      return 0;
  }
  if ((anio % 400 == 0) || ((anio % 4 == 0) && (anio % 100 != 0))) {
      std::cout << "Leap Year" << std::endl;
  } else {
      std::cout << "Not Leap Year" << std::endl;
  }
  return 0;
}
