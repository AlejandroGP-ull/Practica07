/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @file P96767_Polynomial_evaluation_2.cc
  * @author Alejandro Gonzalez Perez: alu0101647456@ull.edu.es
  * @date Oct 2023
  * @brief The program reads a number x and a polynomial, 
  * p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).
  * @bug There are no known bugs
  * @see
*/
  
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double valor_x;
  std::cout << "Cual sera el valor de x: ";
  std::cin >> valor_x;
  double numero{0}, coeficiente{0}, resultado{0}, exponentes{0};
  std::cout << "Introduca de cuantos exponentes es su funcion: ";
  std::cin >> exponentes;
  for (int i = 0; i <= exponentes; i++) {
    double coeficiente;
    std::cout << "Introduzca el coeficiente para x^" << i << ": ";
    std::cin >> coeficiente;
    resultado += coeficiente * pow(valor_x, i);
  }
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
  return 0;
}
