#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <string>
#include <cmath>

class Vector2D {
private:
    double x; // Atributo para la coordenada X
    double y; // Atributo para la coordenada Y

public:
    // Constructor por defecto (inicializa x e y en 0)
    Vector2D();

    // Constructor con parámetros (inicializa x e y con valores específicos)
    Vector2D(double x_val, double y_val);

    // Getters para permitir que tus compañeros accedan a x e y si lo necesitan
    double getX() const;
    double getY() const;

    // Calcular magnitud
    inline double calcularMagitud() {
        return std::sqrt((x * x) + (y * y));
    }

    std::string toString() const;
};

#endif // VECTOR2D_H
