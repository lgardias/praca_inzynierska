#include "Model.h"

void Model::startSimulation(double v1, double v2, int simulationTime, double deltaTime, double lStove) {

    double diffV = v1 - v2;
    double deltaX = diffV*deltaTime;
    int numberOFElement = lStove/deltaX+5;

    vector<Node> nodeVector = createNodes(numberOFElement+1, deltaX, lStove);

    for (int i = 0; i < nodeVector.size() ; ++i) {
        cout<<nodeVector[i].getIndex()<<" "<<nodeVector[i].getXValue()<<" "<<nodeVector[i].getDistanceStove()<<" " <<nodeVector[i].isIsIN()<<endl;
    }


    vector<Element> elementVector = createElements(nodeVector);

    for (int j = 0; j < elementVector.size(); ++j) {

        cout<<elementVector[j].getNode1().getIndex()<<" "<<elementVector[j].getNode2().getIndex()<<endl;
    }

}
vector<Node> Model::createNodes(int numberOfNodes, double deltaX, double lStove) {

    std::vector<Node> nodeVector;
    for(int i = 0; i< numberOfNodes; i++){
        Node node;
        node.setIndex(i+1);
        node.setXValue(i*deltaX);
        if(i<5){
            node.setIsIN(false);
            node.setDistanceStove((5-i)*deltaX);
        } else{
            node.setIsIN(true);
            node.setDistanceStove(lStove-(i-5)*deltaX);
        }
        nodeVector.push_back(node);
    }
    return nodeVector;
}

vector<Element> Model::createElements(vector<Node> nodesVector) {
    vector<Element> elementVector;
    for (int i = 0; i < nodesVector.size()-1; ++i) {
        Element element;
        element.setNode1(nodesVector[i]);
        element.setNode2(nodesVector[i+1]);
        elementVector.push_back(element);

    }
    return elementVector;
}