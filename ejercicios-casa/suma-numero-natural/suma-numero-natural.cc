/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file sum-numero-natural.cc
  * @author Alejandro alu0101647456@ull.edu.es
  * @date Oct 20 2025
  * @brief El programa lee un número natural e imprime como salida la suma de los dígitos del número en cuestión.
  */

#include <iostream>

int main() {
  int numero;
  std::cout << "Introduce un numero natural: ";
  std::cin >> numero;
  int suma = 0;
  while (numero > 0) {
      int digito = numero % 10;   // Obtiene el último dígito
      suma = suma + digito;       // Lo suma al total
      numero = numero / 10;       // Quita el último dígito
  }
  std::cout << "La suma de los digitos es: " << suma << std::endl;
  return 0;
}
