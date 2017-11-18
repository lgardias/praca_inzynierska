#include <iostream>
#include "Element.h"
#include <vector>

using namespace std;
class Model {

public:
    void startSimulation(double v1, double v2, int simulationTime, double deltaTime, double lStove);
    vector<Node> createNodes(int numberOfNodes, double deltaX, double lStove);
    vector<Element> createElements(vector<Node> nodesVector);

};

