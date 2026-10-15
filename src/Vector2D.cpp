#include <cmath>
#include <sstream>

#include "Vector2D.h"

// implementación del constructor por defecto
Vector2D::Vector2D() : x(0.0), y(0.0) {}

// iimplementación del constructor parametrizado
Vector2D::Vector2D(double x_val, double y_val) : x(x_val), y(y_val) {}

// implementación de los métodos Getters
double Vector2D::getX() const {
    return x;
}

double Vector2D::getY() const {
    return y;
}

std::string Vector2D::toString() const {
    std::ostringstream resultado;
    resultado << "(" << x << ", " << y << ")";
    return resultado.str();
}

// Implementación de la sobrecarga del operador +
Vector2D Vector2D::operator+(const Vector2D& otro) const {
    return Vector2D(x + otro.x, y + otro.y);
}

// Implementación de la Función Friend para el producto punto
double productoPunto(const Vector2D& v1, const Vector2D& v2) {
    // Al ser una función amiga, accede directamente a los atributos privados x e y
    return (v1.x * v2.x) + (v1.y * v2.y);
}