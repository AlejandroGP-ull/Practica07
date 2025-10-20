/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file binary-to-decimal.cc
  * @author Alejandro alu0101647456@ull.edu.es
  * @date Oct 20 2025
  * @brief El programa convierte números binarios en decimal.
  * @bug No hay errores conocidos
  */

#include <iostream>

// Función que convierte un número binario a decimal
int binarioADecimal(long long binario) {
	int copia = binario;
	int decimal = 0;
	int potencia = 1; // representa potencias de 2 (1, 2, 4, 8, ...)
	while (copia > 0) {
		int digito = copia % 10;
		if (digito != 0 && digito != 1) {
			return -1; // Indicador de error
		}
		decimal += digito * potencia;
		potencia *= 2;
		copia /= 10;
	}
	return decimal;
}

int main() {
	long long binario;
	std::cout << "Introduce un numero binario: ";
	std::cin >> binario;
	int decimal = binarioADecimal(binario);
	if (decimal == -1) {
		std::cout << "Wrong Input" << std::endl;
	} else {
		std::cout << decimal << std::endl;
	}
	return 0;
}
