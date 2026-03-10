//
// Created by max on 3/9/26.
//
#include "Motor.h"

Motor::Motor() {
    velocidad_actual = 0.0;
    aceleracion = 5.0;
}

void Motor::actualizar() {
    velocidad_actual += aceleracion;
    if (velocidad_actual > 1000) {
        velocidad_actual = 1000;
    }
}

double Motor::getVelocidad() {
    return velocidad_actual;
}

void Motor::setAceleracion(double aceleracion_nueva) {
    aceleracion = aceleracion_nueva;
}