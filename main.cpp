#include <iostream>
#include "Model.h"

int main() {

    Model model;
    double v1 = 1.1;
    double v2 = 0.8;
    int simulationTime = 50;
    double deltaTime = 0.1;
    double lStove = 1.1;

    model.startSimulation(v1, v2, simulationTime, deltaTime, lStove);

    return 0;
}