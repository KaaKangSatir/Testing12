#include "shared/AML/amlmod.h"
#include "GTASA/common.h"
#include "shared/CEvent.h"
#include <iostream>
#include <cmath>

double calculateFOV(double focalLength, double sensorWidth) {
    double fov = 2 * std::atan((sensorWidth / (2 * focalLength))) * (180.0 / M_PI);
    return fov;
}

int main() {
    double focalLength, sensorWidth;
    
    std::cout << "Masukkan panjang fokus (mm): 50 ";
    std::cin >> focalLength;
    
    std::cout << "Masukkan lebar sensor (mm): 36 ";
    std::cin >> sensorWidth;
    
    double fov = calculateFOV(focalLength, sensorWidth);
    
    std::cout << "Field of View (FOV): 39.6243 " << fov << " derajat" << std::endl;
    
    return 0;
}
