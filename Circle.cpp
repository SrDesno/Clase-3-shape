//Edmundo Ruelas Angulo - A01742824
#include "Circle.h"

Circle::Circle(){
  Shape circulo0(1,2);
  r=0;
}

Circle::Circle(Shape _circle, int _r){
  xy=_circle;
  r=_r;
}

std::string Circle::str(){
  return "y radio de: "+std::to_string(r);
}

std::string Circle::getName(){
  return "Circulo";
}