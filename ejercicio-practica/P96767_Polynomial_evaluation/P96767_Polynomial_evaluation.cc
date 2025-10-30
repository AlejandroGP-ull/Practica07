/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Albert Einstein aeinstein@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa 
  */

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double x;
  std::cin >> x;
  double c;
  double p = 0;
  int i = 0;
  while (std::cin >> c) {
    p += c * std::pow(x, i);
    i++;
  }
  std::cout << std::fixed << std::setprecision(4) << p << std::endl;
  return 0;
}

