# MathLibrary - Librería de Operaciones Matemáticas Básicas

Una librería simple en C++ que proporciona funciones para realizar operaciones matemáticas básicas como suma, resta y multiplicación.

## Características

- ✅ Suma de números enteros y decimales
- ✅ Resta de números enteros y decimales  
- ✅ Multiplicación de números enteros y decimales
- ✅ Sobrecarga de funciones para diferentes tipos de datos
- ✅ Namespace organizado para evitar conflictos

## Instalación

### Opción 1: Clonar el repositorio
```bash
git clone https://github.com/TU_USUARIO/math-library.git
cd math-library
```

### Opción 2: Descargar archivos
Descarga los archivos `math_operations.h` y `math_operations.cpp` directamente.

## Uso Rápido

### 1. Incluir en tu proyecto
Copia los archivos a tu proyecto e incluye el header:
```cpp
#include "math_operations.h"
#include <iostream>

int main() {
    // Usando números decimales
    double resultado1 = MathLib::suma(5.5, 3.2);
    std::cout << "5.5 + 3.2 = " << resultado1 << std::endl;
    
    // Usando números enteros
    int resultado2 = MathLib::multiplicacion(4, 7);
    std::cout << "4 * 7 = " << resultado2 << std::endl;
    
    return 0;
}
```

### 2. Compilar
```bash
# Compilación simple
g++ tu_programa.cpp math_operations.cpp -o programa

# Con flags recomendados
g++ -Wall -Wextra -std=c++17 tu_programa.cpp math_operations.cpp -o programa
```

## API Reference

### Namespace: `MathLib`

#### Funciones para números decimales (double)
```cpp
double suma(double a, double b);           // Retorna a + b
double resta(double a, double b);          // Retorna a - b  
double multiplicacion(double a, double b); // Retorna a * b
```

#### Funciones para números enteros (int)
```cpp
int suma(int a, int b);           // Retorna a + b
int resta(int a, int b);          // Retorna a - b
int multiplicacion(int a, int b); // Retorna a * b
```

## Ejemplos de Uso

```cpp
#include "math_operations.h"
#include <iostream>

int main() {
    // Operaciones con decimales
    std::cout << MathLib::suma(10.5, 4.3) << std::endl;        // 14.8
    std::cout << MathLib::resta(10.5, 4.3) << std::endl;       // 6.2
    std::cout << MathLib::multiplicacion(2.5, 4.0) << std::endl; // 10.0
    
    // Operaciones con enteros  
    std::cout << MathLib::suma(15, 25) << std::endl;           // 40
    std::cout << MathLib::resta(15, 5) << std::endl;           // 10
    std::cout << MathLib::multiplicacion(6, 7) << std::endl;   // 42
    
    return 0;
}
```

## Compilación Avanzada

### Crear librería estática
```bash
# Compilar a objeto
g++ -Wall -Wextra -std=c++17 -c math_operations.cpp -o math_operations.o

# Crear archivo de librería
ar rcs libmath.a math_operations.o

# Usar la librería
g++ tu_programa.cpp -L. -lmath -o programa
```

### Usando Makefile
```bash
make        # Crear librería estática
make clean  # Limpiar archivos generados
make help   # Mostrar ayuda
```

## Requisitos del Sistema

- Compilador C++ que soporte C++17 o superior
- GCC 7+ o Clang 5+ recomendados
- Sistema operativo: Linux, macOS, Windows (con MinGW)

## Estructura del Proyecto

```
math-library/
├── README.md              # Este archivo
├── math_operations.h      # Declaraciones de funciones
├── math_operations.cpp    # Implementación
└── Makefile              # Automatización de compilación
```

## Contribuir

1. Haz fork del proyecto
2. Crea una rama para tu feature (`git checkout -b feature/nueva-operacion`)
3. Commitea tus cambios (`git commit -am 'Agregar nueva operación'`)
4. Push a la rama (`git push origin feature/nueva-operacion`)
5. Crea un Pull Request

## Licencia

Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para detalles.

## Autor

**Tu Nombre** - [tu-email@ejemplo.com](mailto:tu-email@ejemplo.com)

## Versión

- **v1.0.0** - Versión inicial con operaciones básicas (suma, resta, multiplicación)

---

⭐ Si te gusta este proyecto, ¡dale una estrella en GitHub!



