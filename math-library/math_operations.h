#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

// Librería de operaciones matemáticas básicas
// Autor: [Tu nombre]
// Versión: 1.0

namespace MathLib {
    
    // Función para sumar dos números
    // Parámetros: a, b - números a sumar
    // Retorna: la suma de a + b
    double suma(double a, double b);
    
    // Función para restar dos números
    // Parámetros: a, b - donde se calcula a - b
    // Retorna: la resta de a - b
    double resta(double a, double b);
    
    // Función para multiplicar dos números
    // Parámetros: a, b - números a multiplicar
    // Retorna: el producto de a * b
    double multiplicacion(double a, double b);
    
    // Funciones sobrecargadas para números enteros
    int suma(int a, int b);
    int resta(int a, int b);
    int multiplicacion(int a, int b);
}

#endif // MATH_OPERATIONS_H