//Edmundo Ruelas Angulo - A01742824
#include "Shape.h"

class Hexagon:public Shape{
  private:
    Shape xy;
  public:
    Hexagon();
    Hexagon(Shape);
    std::string getName()override;
};