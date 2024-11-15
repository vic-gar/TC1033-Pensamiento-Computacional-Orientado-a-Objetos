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
  * alimentación, calculando su dieta dependiendo de que animal es y de su peso.
**/

//Bibliotecas
#include<iostream>
#include<string>

#include"Perro.h" // Objetos de mi proyecto
#include"Gato.h"
#include"Conejo.h"


//Main del programa
int main(){

  Perro perro_1("Pedro", 10, 3.75, "Chihuahua");
  std::cout << "Esta es la informacion del Perro 1" << std::endl;
  std::cout << "Nombre: " << perro_1.get_nombre() << std::endl;
  std::cout << "Edad: " << perro_1.get_edad() << std::endl;
  std::cout << "Peso: " << perro_1.get_peso() << "kg" << std::endl;
  std::cout << "Raza: " << perro_1.get_raza() << std::endl;
  std::cout << "Esta es la cantidad de alimento que debe consumir" << std::endl;
  std::cout << perro_1.cantidadAlimentoPerro() << "g\n" << std::endl;

  Gato gato_1("Jorge", 6, 6.5, "Siames");
  std::cout << "Esta es la informacion del Gato 1" << std::endl;
  std::cout << "Nombre: " << gato_1.get_nombre() << std::endl;
  std::cout << "Edad: " << gato_1.get_edad() << std::endl;
  std::cout << "Peso: " << gato_1.get_peso() << "kg" << std::endl;
  std::cout << "Raza: " << gato_1.get_raza() << std::endl;
  std::cout << "Esta es la cantidad de alimento que debe consumir" << std::endl;
  std::cout << gato_1.cantidadAlimentoGato() << "g\n" << std::endl;

  Conejo conejo_1("Destructor", 4, 1.1, "Mini Rex");
  std::cout << "Esta es la informacion del Conejo 1" << std::endl;
  std::cout << "Nombre: " << conejo_1.get_nombre() << std::endl;
  std::cout << "Edad: " << conejo_1.get_edad() << std::endl;
  std::cout << "Peso: " << conejo_1.get_peso() << "kg" << std::endl;
  std::cout << "Raza: " << conejo_1.get_raza() << std::endl;
  std::cout << "Esta es la cantidad de alimento que debe consumir" << std::endl;
  std::cout << conejo_1.cantidadAlimentoConejo() << "g\n" << std::endl;

  return 0;
}
