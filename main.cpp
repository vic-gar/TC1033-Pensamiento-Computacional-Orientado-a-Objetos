/*
  * Proyecto Casa de Apoción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 07/11/2024
*/

/**
  * Descripción del Proyecto
  * Este proyecto para la clase de Pensamiento Computacional Orientado a Objetos
  * es un programa que guarda diferentes tipos de animales en una casa de
  * acojida con sus respectivos nombres, razas, edades, peso y datos de su
  * salud, y nos permite calcular la cantidad de comida necesaria dependiendo
  * del peso del animal.
**/

//Bibliotecas
#include<iostream> //Para imprimir
#include<string>
#include"animales.h" // Objetos de mi proyecto

//Main del programa 
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
