//Edmundo Ruelas Angulo - A01742824
#include "Rectangle.h"

Rectangle::Rectangle(){
  Shape rectangulo0(1,2);
}

Rectangle::Rectangle(Shape _xy){
  Shape xy=_xy;
}

std::string Rectangle::getName(){
  return "Rectangulo";
}