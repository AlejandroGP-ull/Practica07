/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @file P96767_Polynomial_evaluation_1.cc
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
 
void PrintProgramPurpose() {
  std::cout << "The program reads a number x and a polynomial, " << std::endl;
  std::cout << "p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x). " << std::endl;
  std::cout << "Consists of a real number x followed by the description " << std::endl:
  std::cout << "of the polynomial p(z): the real coefficients c0, c1, …, cn in this order." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1 " << std::endl;
    std::cout << "param1: " << "Un numero entero que toma el valor de x" << std::endl;
    return false;
  }
  return true
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  double valor_x = std::atoi(argv[2]);
  double numero{0.0}, coeficiente{0.0}, resultado{0.0}, exponentes{0.0};
  std::cout << "Introduca de cuantos exponentes es su funcion: ";
  std::cin >> exponentes;
  for (; exponentes > 0; exponentes--) {
    std::cin >> numero;
    resultado += (numero * pow(valor_x, coeficiente));
    coeficiente++;
  }
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
  return 0;
}
