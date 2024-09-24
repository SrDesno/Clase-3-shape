//Edmundo Ruelas Angulo - A01742824
//Se incluye pragma once para evitar que se llame dos veces la clase Shape en el main y que esto no genere error
#pragma once
#include <iostream>

class Shape{
  private:
    int x;
    int y;

  public:
    Shape();
    Shape(int, int);
    //Metdo para desplegar un string 
    std::string draw();
    //Metodo para obtener el nombre de la figura
    virtual std::string getName();
    int getx();
    int gety();
};