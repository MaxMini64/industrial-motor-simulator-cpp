cmake_minimum_required(VERSION 3.10)
project(SimuladorMotor)

# Usamos el estándar C++17 (moderno pero estable)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Esto busca la librería de hilos en tu sistema (Linux ya la trae)
find_package(Threads REQUIRED)

include_directories(include)

# Tu archivo principal se llamará main.cpp
add_executable(SimuladorMotor src/main.cpp
        src/Motor.cpp
        include/Motor.h)

# Le decimos al programa que use la librería de hilos
target_link_libraries(SimuladorMotor PRIVATE Threads::Threads)
