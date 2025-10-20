/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file decimal-to-binary.cc
  * @author Alejandro alu0101647456@ull.edu.es
  * @date Oct 20 2025
  * @brief El programa pasa un numero de decimal a binario.
  * @bug No hay errores conocidos
  */

#include <iostream>

int main() {
  long long n;
  std::cout << "Introduce un numero decimal (>= 0): ";
  std::cin >> n;
  if (n < 0) {
      std::cout << "Wrong Input" << std::endl;
      return 0;
  }
  // Caso especial: 0 en binario es 0
  if (n == 0) {
      std::cout << 0 << std::endl;
      return 0;
  }
  // Encuentra la mayor potencia de 2 <= n
  long long p = 1;
  while (p <= n / 2) {
      p = p * 2; // p toma valores 1,2,4,8,...
  }
  // Imprime los bits desde la potencia mas alta hasta 1
  while (p > 0) {
      int bit = (n >= p) ? 1 : 0;
      std::cout << bit;
      if (bit == 1) {
          n = n - p; // resta la potencia usada
      }
      p = p / 2; // baja a la siguiente potencia de 2
  }
  std::cout << std::endl;
  return 0;
}
