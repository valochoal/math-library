#include <iostream>
#include "math_operations.h"

// Programa principal para probar nuestra librería
int main() {
    std::cout << "=== PRUEBAS DE LA LIBRERÍA MATEMÁTICA ===" << std::endl;
    
    // Probando con números decimales
    std::cout << "\n--- Operaciones con números decimales ---" << std::endl;
    double a = 10.5, b = 3.2;
    
    std::cout << "Numeros: " << a << " y " << b << std::endl;
    std::cout << "Suma: " << MathLib::suma(a, b) << std::endl;
    std::cout << "Resta: " << MathLib::resta(a, b) << std::endl;
    std::cout << "Multiplicacion: " << MathLib::multiplicacion(a, b) << std::endl;
    
    // Probando con números enteros
    std::cout << "\n--- Operaciones con numeros enteros ---" << std::endl;
    int x = 15, y = 4;
    
    std::cout << "Numeros: " << x << " y " << y << std::endl;
    std::cout << "Suma: " << MathLib::suma(x, y) << std::endl;
    std::cout << "Resta: " << MathLib::resta(x, y) << std::endl;
    std::cout << "Multiplicacion: " << MathLib::multiplicacion(x, y) << std::endl;
    
    // Ejemplo interactivo
    std::cout << "\n--- Prueba interactiva ---" << std::endl;
    double num1, num2;
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;
    
    std::cout << "\nResultados:" << std::endl;
    std::cout << num1 << " + " << num2 << " = " << MathLib::suma(num1, num2) << std::endl;
    std::cout << num1 << " - " << num2 << " = " << MathLib::resta(num1, num2) << std::endl;
    std::cout << num1 << " * " << num2 << " = " << MathLib::multiplicacion(num1, num2) << std::endl;
    
    return 0;
}