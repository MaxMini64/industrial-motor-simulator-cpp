# Industrial Motor Control Simulator
An object-oriented C++ application designed to simulate the behavior and control of an industrial DC motor. This project demonstrates the implementation of real-time control loops, physical modeling, and PID (Proportional-Integral-Derivative) algorithms.

## 🚀 Overview
This simulator models a motor's physical properties (acceleration, friction, speed limits) and implements a software controller to manage its performance. It aims to bridge the gap between high-level software engineering and industrial automation.

## 🛠️ Tech Stack & Concepts
* **Language:** C++17
* **Build System:** CMake
* **Environment:** Linux (Ubuntu)
* **Key Concepts:**
  * Object-Oriented Programming (OOP)
  * Real-time processing with `<chrono>`
  * Multithreading for decoupled control loops (In Progress)
  * PID Control Algorithms for precision automation

## 📁 Project Structure
* `src/`: Source code files (.cpp).
* `include/`: Header files (.h).
* `CMakeLists.txt`: Build configuration.

## ⚙️ Installation & Build
To build this project on a Linux environment, ensure you have cmake and g++ installed.

1. Clone the repository:
```bash
  git clone https://github.com/YOUR_USERNAME/industrial-motor-simulator-cpp.git
  cd industrial-motor-simulator-cpp
```
2. Configure with CMake:
```bash
cmake .
```
3. Compile:
```bash
make
```
4. Run the Simulator:
```bash
./SimuladorMotor
```
## 📈 Roadmap
[x] Basic motor class and physical modeling.

[x] High-precision timing loop using `<chrono>`.

[ ] Interactive user input for target setpoints.

[ ] Implementation of the PID Control Algorithm.

[ ] Data logging for performance analysis.

## 🤝 Context
This project is part of a professional development path focused on Industrial Software Engineering, targeting systems similar to those used by industry leaders like Bühler Group and Kulicke & Soffa.

Developed as a technical showcase for ITC Engineering.
