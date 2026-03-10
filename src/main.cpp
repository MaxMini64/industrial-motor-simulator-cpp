//
// Created by max on 3/9/26.
//

#include <iostream>
#include <chrono> // La librería de tiempo
#include <thread> // Para poder hacer pausas (sleep)
#include "../include/Motor.h"
using namespace  std;

int main() {
    Motor Motor1;
    cout << "--- Simulando arranque de motor ---" << endl;

    for (int i = 0; i < 10; ++i) {
        Motor1.actualizar();

        cout << "Segundo: " << i << " | Velocidad: " << Motor1.getVelocidad() << endl;

        this_thread::sleep_for(chrono::milliseconds(500));
    }
    return 0;
}