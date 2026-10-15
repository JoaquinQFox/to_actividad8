#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <string>
#include <cmath>

class Vector2D {
private:
    double x; // Atributo para la coordenada X
    double y; // Atributo para la coordenada Y

public:
    // Constructor por defecto
    Vector2D();

    // Constructor con parámetros
    Vector2D(double x_val, double y_val);

    // Getters de acceso a x e y 
    double getX() const;
    double getY() const;

    // Calcular magnitud
    inline double calcularMagitud() {
        return std::sqrt((x * x) + (y * y));
    }

    std::string toString() const;

    // Sobrecarga del operador + de clase Vector2D
    Vector2D operator+(const Vector2D& otro) const;

    // Declaración de función friend para el producto punto
    friend double productoPunto(const Vector2D& v1, const Vector2D& v2);
};

#endif // VECTOR2D_H
