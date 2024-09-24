//Edmundo Ruelas Angulo - A01742824
#include "Hexagon.h"

Hexagon::Hexagon(){
  Shape hexagono0(1,2);
}

Hexagon::Hexagon(Shape _xy){
  xy=_xy;
}

std::string Hexagon::getName(){
  return "Hexagono";
}