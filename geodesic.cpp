#include <cmath>
#include "getCoordinate.h"
#define M_PI 3.1415
int main() {
    getCoordinate coordinate;
    coordinate.getDistAndAzimut(47.1888, 38.123, 47.1882, 38.1323);
    std::cout << "Dist: " << coordinate.dist << "; Azimut: " << coordinate.azimut << " |";
    coordinate.getInertialCoordinates(coordinate.dist, coordinate.azimut, 0, 0);
    std::cout  << " X: " << coordinate.x << "; Y: " << coordinate.y;
    return 0;
}

