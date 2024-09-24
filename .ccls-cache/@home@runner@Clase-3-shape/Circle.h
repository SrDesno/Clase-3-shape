//Edmundo Ruelas Angulo - A01742824
#include "Shape.h"

class Circle:public Shape{
  private:
    Shape xy;
    int r;
  public:
    Circle();
    //Metodo que asigna valores x, y, radio pero llamando a la clase padre
    Circle(Shape, int);
    std::string str();
    //Metodo para sobrescribir el return del metodo getName de la clase Shape
    std::string getName()override;
};