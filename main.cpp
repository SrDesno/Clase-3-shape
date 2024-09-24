//Edmundo Ruelas Angulo - A01742824
#include "Circle.h"
#include "Rectangle.h"
#include "Hexagon.h"

int main(){
  //Se crean lo objetos de shape
  Shape shape1(2,5), shape2(3,5), shape3(2,9), shape4(7,3);
  //Se creaa un objeto Cirle con atributos de shape1 y se llaman los metodos para imprimir cadenas de string
  Shape*shapePtr = new Circle(shape1,5); 
  std::cout << "Soy un " << shapePtr->getName() << " con valor x en: " <<shape1.getx()<<" y valor y en: "<< shape1.gety()<<std::endl; 

  //Se crea un objeto Circle pero con los metodos antiguos para imprimir
  Circle circulo1(shape2,5);
  std::cout<<circulo1.draw()<<" con valor x en: "<<circulo1.getx()<<" y valor y en: "<<circulo1.gety()<<std::endl;


  //Se crea un objeto Rectangle
  Shape*shapePtr2 = new Rectangle(shape3);
  std::cout<<"Soy un "<<shapePtr2->getName()<<" con valor x en: "<<shape3.getx()<<" y valor y en: "<<shape3.gety()<<std::endl;


  //Se crea un objeto Hexagon
  Shape*shapePtr3 = new Hexagon(shape4);
  std::cout<<"Soy un "<<shapePtr3->getName()<<" con valor x en: "<<shape4.getx()<<" y valor y en: "<<shape4.gety()<<std::endl;

  

  return 0;
}