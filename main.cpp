#include<iostream>
#include<string>
#include"animales.h"

int main(){
  Perro perro_1("Chihuahua", "Pedro", 10, 3.75, true);
  std::cout << perro_1.get_raza() << std::endl;
  std::cout << perro_1.get_nombre() << std::endl;
  std::cout << perro_1.get_edad() << std::endl;
  std::cout << perro_1.get_peso() << std::endl;
  std::cout << perro_1.get_vacunacion() << std::endl;
  std::cout << perro_1.get_cantidad_alimento() << "\n" << std::endl;

  Gato gato_1("Siames", "Jorge", 6, 6.5, true);
  std::cout << gato_1.get_raza() << std::endl;
  std::cout << gato_1.get_nombre() << std::endl;
  std::cout << gato_1.get_edad() << std::endl;
  std::cout << gato_1.get_peso() << std::endl;
  std::cout << gato_1.get_vacunacion() << std::endl;
  std::cout << gato_1.get_cantidad_alimento() << "\n" << std::endl;

  Conejo conejo_1("Mini Rex", "Destructor", 4, 1.4, false);
  std::cout << conejo_1.get_raza() << std::endl;
  std::cout << conejo_1.get_nombre() << std::endl;
  std::cout << conejo_1.get_edad() << std::endl;
  std::cout << conejo_1.get_peso() << std::endl;
  std::cout << conejo_1.get_vacunacion() << std::endl;
  std::cout << conejo_1.get_cantidad_alimento() << "\n" << std::endl;

  return 0;
}
