//Edmundo Ruelas Angulo - A01742824
#include "Shape.h"

Shape::Shape(){
  x=0;
  y=0;
}

Shape::Shape(int _x, int _y){
  x = _x;
  y = _y;
}

std::string Shape::draw(){
  return "Soy un";
}

std::string Shape::getName(){
  return "Forma";
}
int Shape::getx(){
  return x;
}

int Shape::gety(){
  return y;
}