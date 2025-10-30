# Nombre del ejecutable
EXEC = P61061_Product_of_digits

# Archivos fuente
SRC = P61061_Product_of_digits.cc

# Archivos objeto generados a partir de los archivos fuente
OBJ = $(SRC:.cc=.o)

# Compilador y flags
CC = g++
CFLAGS = -std=c++17 -Wall -MMD

# Regla por defecto, compilar el ejecutable
all: $(EXEC)

# Regla para compilar el ejecutable
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Regla para compilar archivos .cc en archivos .o
%.o: %.cc
	$(CC) $(CFLAGS) -c $<

# Incluir dependencias automáticas generadas por -MMD
-include $(OBJ:.o=.d)

# Limpiar archivos generados
clean:
	rm -f $(OBJ) $(EXEC) $(OBJ:.o=.d)

# Otros objetivos opcionales
.PHONY: all clean

