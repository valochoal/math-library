# Makefile para la librería matemática

# Compilador y flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Archivos
SOURCES = math_operations.cpp main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = programa
LIBRARY = libmath.a

# Regla principal
all: $(EXECUTABLE)

# Crear el ejecutable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

# Crear archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Crear librería estática
library: math_operations.o
	ar rcs $(LIBRARY) math_operations.o

# Limpiar archivos generados
clean:
	rm -f $(OBJECTS) $(EXECUTABLE) $(LIBRARY)

# Ejecutar el programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Declarar targets que no son archivos
.PHONY: all clean run library