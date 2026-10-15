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

    double umbral = 5.0; // Umbral de prueba

    // Definición de la función lambda que captura el 'umbral'
    auto superaUmbral = [umbral](Vector2D v) {
        return v.calcularMagitud() > umbral;
    };

    std::cout << "\n--- Evaluación de Umbral ---" << std::endl;
    std::cout << "Umbral configurado: " << umbral << std::endl;

    // Evaluamos el Vector 1
    std::cout << "Magnitud de Vector 1: " << v1.calcularMagitud() << std::endl;
    if (superaUmbral(v1)) {
        std::cout << "-> El Vector 1 SI supera el umbral." << std::endl;
    } else {
        std::cout << "-> El Vector 1 NO supera el umbral." << std::endl;
    }

    // Evaluamos el Vector Resultante (vResultado = (5.0, 6.0), magnitud aprox = 7.81)
    std::cout << "Magnitud de Vector Resultado: " << vResultado.calcularMagitud() << std::endl;
    if (superaUmbral(vResultado)) {
        std::cout << "-> El Vector Resultado SI supera el umbral." << std::endl;
    } else {
        std::cout << "-> El Vector Resultado NO supera el umbral." << std::endl;
    }


    // Probando función friend 
    double resultadoPunto = productoPunto(v1, v2);
    std::cout << "Producto punto: " << resultadoPunto << std::endl; 
    
    
    return 0;
}