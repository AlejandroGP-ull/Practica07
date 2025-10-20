/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file fibonacci.cc
  * @author Alejandro alu0101647456@ull.edu.es
  * @date Oct 20 2025
  * @brief El programa que imprime los N primeros términos de la Serie de Fibonacci.
  * @bug No hay errores conocidos
  */

#include <iostream>

int main() {
  int N;
  std::cout << "Introduce el numero de terminos de la serie de Fibonacci: ";
  std::cin >> N;
  int a = 0;   // primer término
  int b = 1;   // segundo término
  std::cout << "Los " << N << " primeros terminos de la serie de Fibonacci son:" << std::endl;
  for (int i = 0; i < N; i++) {
      std::cout << a << " ";
      int siguiente = a + b;
      a = b;
      b = siguiente;
  }
  std::cout << std::endl;
  return 0;
}
