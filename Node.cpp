#include "Node.h"

double Node::getXValue() const {
    return xValue;
}

void Node::setXValue(double xValue) {
    Node::xValue = xValue;
}

int Node::getIndex() const {
    return index;
}

void Node::setIndex(int index) {
    Node::index = index;
}

double Node::getDistanceStove() const {
    return distanceStove;
}

void Node::setDistanceStove(double distanceStove) {
    Node::distanceStove = distanceStove;
}

bool Node::isIsIN() const {
    return isIN;
}

void Node::setIsIN(bool isIN) {
    Node::isIN = isIN;
}
