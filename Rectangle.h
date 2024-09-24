//Edmundo Ruelas Angulo - A01742824
#include "Shape.h"

class Rectangle:public Shape{
  private:
    //Se llama el atributo de la clase padre para asignar x y y
    Shape xy;
  public:
    Rectangle();
    Rectangle(Shape);
    std::string getName()override;
};