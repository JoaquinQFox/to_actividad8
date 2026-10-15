#include <iostream>
#include "Vector2D.h"

int main() {
    // Vectores de prueba
    Vector2D v1(3.5, 4.0);
    Vector2D v2(1.5, 2.0);

    std::cout << "Vector 1: " << v1.toString() << std::endl;
    std::cout << "Vector 2: " << v2.toString() << std::endl;

    // Probando sobrecarga del operador +
    Vector2D vResultado = v1 + v2;
    std::cout << "Resultado: " << vResultado.toString() << std::endl;

    return 0;
}