//
// Created by max on 3/9/26.
//
#ifndef SIMULADORMOTOR_MOTOR_H
#define SIMULADORMOTOR_MOTOR_H

#include <iostream>
#include <chrono>
#include <thread>
class Motor{
private:
    double velocidad_actual;
    double aceleracion; //Cuantas RPM sube por cada paso de tiempo

public:
    Motor();
    void actualizar();
    double getVelocidad();
    void setAceleracion(double aceleracion_nueva);
};

#endif //SIMULADORMOTOR_MOTOR_H