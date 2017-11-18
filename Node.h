#include <iostream>

class Node {
private:
    double xValue;
    int index;
    double distanceStove;
    bool isIN;
public:
    double getXValue() const;

    void setXValue(double xValue);

    int getIndex() const;

    void setIndex(int index);

    double getDistanceStove() const;

    void setDistanceStove(double distanceStove);

    bool isIsIN() const;

    void setIsIN(bool isIN);
};
